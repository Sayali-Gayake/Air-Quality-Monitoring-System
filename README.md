# Air Quality Monitoring System

## Project Overview

The **Air Quality Monitoring System** is an IoT-based project designed to measure and analyze air quality parameters in real-time. It uses sensors like **MQ135** (for detecting gases like CO2, NH3, benzene, etc.) and **DHT11** (for measuring temperature and humidity) interfaced with a **NodeMCU (ESP8266)** microcontroller. The sensor data is transmitted to the cloud using **Arduino IoT Cloud**, where it is visualized and monitored through a real-time dashboard.

---

## Features

- Real-time monitoring of air quality, temperature, and humidity.
- Data visualization on Arduino IoT Cloud Dashboard.
- Remote access to live sensor data from any device with internet connectivity.
- Alerts or threshold-based monitoring (optional extension).

---

## Technologies & Tools Used

- **Hardware:**
  - NodeMCU ESP8266
  - MQ135 Gas Sensor
  - DHT11 Temperature & Humidity Sensor
  - Breadboard, jumper wires, USB cable

- **Software:**
  - Arduino IDE
  - Arduino IoT Cloud
  - Arduino libraries: `DHT.h`, `MQ135.h`, `WiFi.h`, `ThingProperties.h`

- **Concepts:**
  - Internet of Things (IoT)
  - Cloud Computing
  - Sensor Interfacing
  - Real-time Data Transmission

---

## Working Principle

1. The **MQ135** sensor detects various gases and returns analog values.
2. The **DHT11** sensor provides temperature and humidity readings.
3. The **NodeMCU ESP8266** reads data from both sensors.
4. The data is sent to **Arduino IoT Cloud**, where it is visualized and monitored through widgets on a dashboard.

---
