#include <Arduino.h>
#include <ESP8266WiFi.h>

#include "wifipassword.h"
#include <ESP8266IFTTT.h>

void setup() {
  Serial.begin(115200);
  delay(100);

  // We start by connecting to a WiFi network

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("should be working");

  const char *event = "button_pressed";
  IFTTT.trigger(event, apikey);
  delay(30000);
}
