#include <Arduino.h>
#include <WiFi.h>
#include "wifi_connection.h"

void setup()
{
  int n = 0;
  Serial.begin(921600);
  Serial.println("SETUP");
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println("CONNECTING");
}

void loop()
{
  delay(1000);
  int status = WiFi.status();
  if(status == WL_CONNECTED)
    Serial.print("Connected");
  else
    Serial.print(status);
  Serial.print('\t');
  Serial.print(WiFi.localIP());
  Serial.println();
}