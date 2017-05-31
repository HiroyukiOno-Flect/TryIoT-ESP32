/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIE0zCCA7ugAwIBAgIQGNrRniZ96LtKIVjNzGs7SjANBgkqhkiG9w0BAQUFADCB\n\
yjELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL\n\
ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJp\n\
U2lnbiwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxW\n\
ZXJpU2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0\n\
aG9yaXR5IC0gRzUwHhcNMDYxMTA4MDAwMDAwWhcNMzYwNzE2MjM1OTU5WjCByjEL\n\
MAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQLExZW\n\
ZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJpU2ln\n\
biwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxWZXJp\n\
U2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0aG9y\n\
aXR5IC0gRzUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCvJAgIKXo1\n\
nmAMqudLO07cfLw8RRy7K+D+KQL5VwijZIUVJ/XxrcgxiV0i6CqqpkKzj/i5Vbex\n\
t0uz/o9+B1fs70PbZmIVYc9gDaTY3vjgw2IIPVQT60nKWVSFJuUrjxuf6/WhkcIz\n\
SdhDY2pSS9KP6HBRTdGJaXvHcPaz3BJ023tdS1bTlr8Vd6Gw9KIl8q8ckmcY5fQG\n\
BO+QueQA5N06tRn/Arr0PO7gi+s3i+z016zy9vA9r911kTMZHRxAy3QkGSGT2RT+\n\
rCpSx4/VBEnkjWNHiDxpg8v+R70rfk/Fla4OndTRQ8Bnc+MUCH7lP59zuDMKz10/\n\
NIeWiu5T6CUVAgMBAAGjgbIwga8wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8E\n\
BAMCAQYwbQYIKwYBBQUHAQwEYTBfoV2gWzBZMFcwVRYJaW1hZ2UvZ2lmMCEwHzAH\n\
BgUrDgMCGgQUj+XTGoasjY5rw8+AatRIGCx7GS4wJRYjaHR0cDovL2xvZ28udmVy\n\
aXNpZ24uY29tL3ZzbG9nby5naWYwHQYDVR0OBBYEFH/TZafC3ey78DAJ80M5+gKv\n\
MzEzMA0GCSqGSIb3DQEBBQUAA4IBAQCTJEowX2LP2BqYLz3q3JktvXf2pXkiOOzE\n\
p6B4Eq1iDkVwZMXnl2YtmAl+X6/WzChl8gGqCBpH3vn5fJJaCGkgDdk+bW48DW7Y\n\
5gaRQBi5+MHt39tBquCWIMnNZBU4gcmU7qKEKQsTb47bDN0lAtukixlE0kF6BWlK\n\
WE9gyn6CagsCqiUXObXbf+eEZSqVir2G3l6BFoMtEMze/aiCKm0oHw0LxOXnGiYZ\n\
4fQRbxC1lfznQgUy286dUV4otp6F01vvpX1FQHKOtw5rDgb7MzVIcbidJ4vEZV8N\n\
hnacRHr2lVz2XTIIM6RUthg/aFzyQkqFOFSDX9HoLPKsEdao7WNq\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWTCCAkGgAwIBAgIUT4Z7kViDRLrQVvBAYR8JcL8lmKowDQYJKoZIhvcNAQEL\n\
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n\
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTE3MDQyNzA2MzU0\n\
M1oXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n\
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAJLuWcy7t93Om6rkDjD9\n\
vIr7dftu54sfHXnoeQ9KlLX2NmPJBMvwlG2bEL9TJAYCyxAThBhwfnsKMVc0ycNl\n\
N/ccMDo8Gn4s8pj3SivGwOwxclfvXH2IPNe8D3WH7oR76kMeMC5gvcVTZ6hFsn7Q\n\
BRECbHqdH5VCGG3CYqpn6POUd5gRKZtfrBtls8zMEVpmk5xiCc/+8JxeHqo4Z03e\n\
VivWvUZ8uIXFOfoq7Wr3TfHQWoldSF6CEwh00PBAaGdNWIRrw3KwcesFOFaBckeI\n\
yKz/uiOpe7bPjWAZl33Ql6YWp27VF1TmkzlJTNDDp+ayhqCbFk2oOp/p9lpG/m1B\n\
ZlkCAwEAAaNgMF4wHwYDVR0jBBgwFoAUvAxR8WPeaLvc6soe02wjJQv9scowHQYD\n\
VR0OBBYEFPzxbH5LENRNdIzNyVHz7Q5jsAebMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n\
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAxVBEjm0gBh2KVEPUnhh3N+0Zc\n\
Z+QNTgrGyZk9+CRFOREU+bo5XQG6kfNpYWeM44cZMjaQOiYzoNeemmRgw28xMixM\n\
30E4EllZAUwNIMYR5gFpeN43KN/Ht9LQMRXym9BLk4layWmpPLywZ8kFiT7AgcA1\n\
9XEdpau1u5khCKo4GeqU7CmpB38QxSnJz2rCvOA18wjzw91YlpOzZSQZqV/WSH79\n\
bENpXkAXwgBYV38MKjplsU7Ueh/h+8PYyrjkqL2x+YlGO0IRpMnR3nIr8nEfltXP\n\
yj9IjaaGZzNOqboPKn1X0j5hQgxosuXQavCmQbFy1WKKpk1fYAjBkj0vXEXY\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEogIBAAKCAQEAku5ZzLu33c6bquQOMP28ivt1+27nix8deeh5D0qUtfY2Y8kE\n\
y/CUbZsQv1MkBgLLEBOEGHB+ewoxVzTJw2U39xwwOjwafizymPdKK8bA7DFyV+9c\n\
fYg817wPdYfuhHvqQx4wLmC9xVNnqEWyftAFEQJsep0flUIYbcJiqmfo85R3mBEp\n\
m1+sG2WzzMwRWmaTnGIJz/7wnF4eqjhnTd5WK9a9Rny4hcU5+irtavdN8dBaiV1I\n\
XoITCHTQ8EBoZ01YhGvDcrBx6wU4VoFyR4jIrP+6I6l7ts+NYBmXfdCXphanbtUX\n\
VOaTOUlM0MOn5rKGoJsWTag6n+n2Wkb+bUFmWQIDAQABAoIBAGQ841p+/jL+DskJ\n\
CH13vTb70kOUJ7aLpapTZLN/5/AzZmuw6erP2BLmZQiBiePn5+yxw76AkGkUTRD3\n\
XGZHGWUl/+jatCA8Pc0Jd7phv5/jI+TF0U16sjdjfxBpidksSGc9oxUgvpZuDhuI\n\
YPuOosY15xfHNZK4Ir5OjM1AUnZJV4LOrbcZPy5Sai7asf0sAU02JnFN5NG1oET6\n\
b7NrSQ+X/eYw56ia4HfL9yp9f3v+zQJD/t0R48pCqfvLBuLuTz62MYrM4lgbDMgj\n\
N0lmbwuj8Mr3wcXG/SyTox7WeOLME2gvfHMIwPMTY8fTTaIIn9nzxsVtLexuTYBk\n\
+DuecQECgYEA7Bn+o/BUgQO3VMpQQ+WH6BKsqC7DpGibXhjiJFnUEsyZGvnDGurs\n\
gWM0xGVXbTQhUp54mBEO5homlDPzMWJxPwkJ5krUwZD6JaciYHF7xKcWLeaP4L+o\n\
47x7SqpVOHJmbnJVwNlH5phKbAEZAhyOn74MP06LmcHH9w3XPMtAZWkCgYEAn1B1\n\
qroKKLObreRw6zJwciiXQRZp56XuMCvcSXJ4p1Prqp+7ocmZrIntXCOio0tw70ph\n\
3AHRwrd2HydMo3FYXA46pAp+bqAecahZ//rHFBD69pKj4P6XFrq2J8zpOnsbOZd9\n\
SMuXOxxCKai/eD0xWMGUXeaSRi9VqsscdyjsK3ECgYA6t+BPj1bE21K+AK7jo/Mf\n\
8X0FOtQnUGjLhy6+0aRfpIizX8h5KlH1f+HAsl+C5kMfVBAz6ZImAfz0QNNLxera\n\
PXo7zwKIvXCo6p8vEyov50op0jyYLbJoKRkUobYeGr2E3GSdWKx8GgXwRHmev9Fs\n\
wwwytmsbq0j7FXMhSH9UeQKBgD/hHS01p3kme1fAb15/PQMpL2zTtedCaz05ePyi\n\
P6qoRaiGn8+BbHL4Ywo856ueRkxMgOycdiUjNuPK+DnY6tsOgYjhBE0LOunL3Tp8\n\
rXJoVJilt7wxmRduCjfvO91NG19+VKfpqlvzOrxFg3CM6Mpz5C+6khA+TpVLF8DX\n\
0cqhAoGAZW8TMuOaCbs8TgILTOyM1OOz8xdmze0JkYoGxZdFo4NKE2/sCpsw4NZ+\n\
Q6YrycaRikg47gdz57bVM2mH+SVV6QgeKi7YM10Py8PL5qr/qgOpB+Iw92voPxfM\n\
qtXqI+DFmeYD9odzBkIAOB1r/7bS5Eov2KtrQol6z+7FOj94eCw=\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif
