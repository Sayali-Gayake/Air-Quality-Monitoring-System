#include "thingProperties.h"
#include <DHT.h>

#define DHTPIN D2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
const int mq135Pin = A0;

void setup() {
  Serial.begin(9600);
  delay(1500);
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
  dht.begin();
}

void loop() {
  ArduinoCloud.update();

  // Reading sensor data
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  int air_quality = analogRead(mq135Pin);

  // Send to cloud variables
  temperature = temp;
  humidity = hum;
  airQuality = air_quality;

  delay(2000);
}