#include <Arduino.h>
#include <WiFiMulti.h>
#include "wifi_connection.h"

WiFiMulti wifi;
int n = 0;

void setup()
{
  Serial.begin(921600);
  Serial.println("SETUP");

  wifi.addAP(WIFI_SSID, WIFI_PASSWORD);

  Serial.println("CONNECTING");
  while(wifi.run() != WL_CONNECTED)
  {
    delay(100);
    Serial.println(n++);
  }
  Serial.println("CONNECTED");
}

void loop()
{
  delay(1000);
  Serial.print(WiFi.status());
  Serial.print('\t');
  Serial.print(WiFi.localIP());
  Serial.println();
}