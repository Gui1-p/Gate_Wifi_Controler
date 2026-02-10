#include <Arduino.h>
#include <Wifi.h>

#define LED 5

#define WIFI_SSID "LabTeC - Colaboradores"
#define WIFI_PASSWORD "asdf1234"

void setup() {
  pinMode(LED, OUTPUT);

  while(WiFi.status() != WL_CONNECTED){
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    delay(2000);
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    
  }
}

void loop() {
  if(WiFi.status() == WL_CONNECTED){
    digitalWrite(LED, HIGH);
  }
}

