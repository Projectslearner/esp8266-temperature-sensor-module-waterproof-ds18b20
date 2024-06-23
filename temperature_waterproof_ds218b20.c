/*
    Project name : ESP8266 Temperature sensor module Waterproof DS18B20
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-temperature-sensor-module-waterproof-ds18b20
*/

#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is connected to GPIO pin D4
#define ONE_WIRE_BUS D4

// Setup a oneWire instance to communicate with any OneWire device
OneWire oneWire(ONE_WIRE_BUS);

// Pass the oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

void setup(void) {
  // Start serial communication
  Serial.begin(9600);
  Serial.println("Dallas Temperature IC Control Library Demo");

  // Start up the library
  sensors.begin();
}

void loop(void) {
  // Request temperature readings from all devices on the bus
  sensors.requestTemperatures(); 
  
  // Fetch the temperature in Celsius for the first sensor
  float temperatureC = sensors.getTempCByIndex(0);

  // Check if any reads failed
  if (temperatureC == DEVICE_DISCONNECTED_C) {
    Serial.println("Failed to read from DS18B20 sensor!");
    return;
  }

  // Print temperature to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // Add a small delay before the next reading
  delay(2000);
}
