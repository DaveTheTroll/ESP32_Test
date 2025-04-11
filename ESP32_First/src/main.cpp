#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("SETUP");
}

int n = 0;
void loop()
{
  delay(1000);
  Serial.println(n++);
}