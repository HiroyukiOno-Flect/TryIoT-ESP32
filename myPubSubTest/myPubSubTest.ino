#include <AWS_IOT.h>
#include <WiFi.h>

AWS_IOT hornbill;
char WIFI_SSID[]="FlectGuest";
char WIFI_PASSWORD[]="flt4guest";
char HOST_ADDRESS[]="af7aiqskoudfc.iot.ap-northeast-1.amazonaws.com";
char CLIENT_ID[]= "wc_monitor_1";
char TOPIC_NAME[]= "wc_status/monitor_1";

int status = WL_IDLE_STATUS;
int tick=0,msgCount=0,msgReceived = 0;
char payload[512];
char rcvdPayload[512];

void mySubCallBackHandler (char *topicName, int payloadLen, char *payLoad)
{
    strncpy(rcvdPayload,payLoad,payloadLen);
    rcvdPayload[payloadLen] = 0;
    msgReceived = 1;
}

void setup() {
    Serial.begin(115200);
    delay(2000);
  
    while (status != WL_CONNECTED)
    {
        Serial.print("Attempting to connect to SSID: ");
        Serial.println(WIFI_SSID);
        // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
        status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
        // wait 5 seconds for connection:
        delay(5000);
    }
    Serial.println("Connected to wifi");
    
    if(hornbill.connect(HOST_ADDRESS,CLIENT_ID)== 0)
    {
        Serial.println("Connected to AWS");
        delay(1000);
        if(0==hornbill.subscribe(TOPIC_NAME,mySubCallBackHandler))
        {
            Serial.println("Subscribe Successfull");
        }
        else
        {
            Serial.println("Subscribe Failed, Check the Thing Name and Certificates");
            while(1);
        }
    }
    else
    {
        Serial.println("AWS connection failed, Check the HOST Address");
        while(1);
    }
    delay(2000);
}

void loop() {

    //接続済みかチェック
    if (WiFi.status() != WL_CONNECTED)
    {
        Serial.println("Wifi Disconnected, Reconnecting after 1sec");
        vTaskDelay(1000/portTICK_PERIOD_MS);
        wifiInit();
        connectToAWS();
    }
    
    //ドアセンサーのアナログ値取得
    int adc_key_in = analogRead(36);
    if(msgReceived == 1)
    {
        msgReceived = 0;
        Serial.print("Received Message:");
        Serial.println(rcvdPayload);
    }
    if(tick >= 1)   // publish to topic every 1seconds
    {
        tick=0;
        sprintf(payload,"{ \"payload\" : \"%d\" }", adc_key_in);
        //とりあえずパブリッシュしてみる
        if(hornbill.publish(TOPIC_NAME,payload) == 0)
        {        
            Serial.print("Publish Message:");
            Serial.println(payload);
        }
        else
        {
            Serial.println("Publish failed");
        }
    }  
    //vTaskDelay(1000 / portTICK_RATE_MS); 
    delay(1000);
    tick++;
}

void wifiInit()
{
    Serial.print("wifiInit() start");
    int status = WL_IDLE_STATUS;
    while (status != WL_CONNECTED)
    {
        sprintf(rcvdPayload, "Reconnicting to SSID:%s",WIFI_SSID);
        Serial.println(rcvdPayload);
        status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
        // wait 5 seconds for connection:
        vTaskDelay(2000/portTICK_PERIOD_MS);
    }
    Serial.print("wifiInit() end");
}

void connectToAWS()
{
  Serial.print("connectToAWS() start");
  if(hornbill.connect(HOST_ADDRESS,CLIENT_ID)== 0)
    {
        Serial.println("Connected to AWS");
        delay(1000);
        if(0==hornbill.subscribe(TOPIC_NAME,mySubCallBackHandler))
        {
            Serial.println("Subscribe Successfull");
        }
        else
        {
            Serial.println("Subscribe Failed, Check the Thing Name and Certificates");
            //while(1);
        }
    }
    else
    {
        Serial.println("AWS connection failed, Check the HOST Address");
        //while(1);
    }
    Serial.print("connectToAWS() end");
}

