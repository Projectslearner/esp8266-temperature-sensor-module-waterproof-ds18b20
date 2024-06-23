# ESP8266 Temperature Sensor Module (Waterproof DS18B20) Project

#### Project Overview
This project demonstrates how to interface a waterproof DS18B20 temperature sensor with an ESP8266 microcontroller to measure and display temperature readings. The DS18B20 is a digital temperature sensor known for its accuracy and suitability for various environmental conditions, including wet or underwater environments.

#### Components Needed
- **ESP8266 Microcontroller (NodeMCU)**
- **DS18B20 Waterproof Temperature Sensor**
- **4.7k Ohm Resistor**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup
1. **Connecting the DS18B20 to ESP8266:**
   - **VCC (Red) wire:** Connect to the 3.3V pin on the ESP8266.
   - **GND (Black) wire:** Connect to a ground (GND) pin on the ESP8266.
   - **Data (Yellow) wire:** Connect to GPIO pin D4 on the ESP8266.
   - **4.7k Ohm Resistor:** Place between the VCC and data wires to act as a pull-up resistor.

#### Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 9600 for debugging purposes.
   - Include the necessary libraries `OneWire.h` and `DallasTemperature.h` to interface with the DS18B20 sensor.
   - Create a `OneWire` instance and pass it to a `DallasTemperature` object to communicate with the DS18B20 sensor.
   - Initialize the sensor library with `sensors.begin()` in the `setup()` function.

2. **Operation:**
   - In the `loop()` function:
     - Use `sensors.requestTemperatures()` to request temperature readings from all DS18B20 sensors connected.
     - Retrieve the temperature in Celsius using `sensors.getTempCByIndex(0)` for the first sensor.
     - Check for errors using `DEVICE_DISCONNECTED_C` if the sensor fails to respond.
     - Print the temperature to the Serial Monitor.
     - Add a delay (`delay(2000)`) to allow for stabilization and prevent rapid consecutive readings.

#### Applications
- **Environmental Monitoring:** Measure temperature in outdoor or aquatic environments.
- **Industrial Applications:** Monitor temperatures in machinery or equipment.
- **Home Automation:** Integrate temperature readings into smart home systems.

#### Notes
- **Multiple Sensors:** Modify the code to handle multiple DS18B20 sensors if necessary.
- **Accuracy:** The DS18B20 provides accurate temperature readings with a resolution of up to 12 bits.
- **Power Considerations:** Ensure sufficient power supply for stable sensor operation, especially in outdoor or harsh environments.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Temperature Sensor Module (DS18B20)](https://projectslearner.com/learn/esp8266-temperature-sensor-module-waterproof-ds18b20)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner