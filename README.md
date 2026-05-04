# Smart-Distance-Safety-System
"An Arduino-based safety alert system utilizing an ultrasonic sensor and piezo-buzzer for real-time distance monitoring."
# Smart Distance-Controlled Safety System

## Overview
A real-time embedded system designed to provide audio-visual alerts when an object enters a predefined safety zone (50cm). This simulates industrial safety barriers or automotive parking sensors.

## Features
* **Sensor:** 3-Pin Ultrasonic Distance Sensor (Time-of-Flight measurement).
* **Alerts:** 1000Hz Piezo-buzzer audio signal and LED visual indicator.
* **Logic:** Implemented in C++ with distance calculation based on the speed of sound ($340m/s$).

## Circuit Schematic
![Schematic](Your_Schematic_Image_Name.png)

## How to Run
1. Upload the `.ino` file to an Arduino Uno.
2. Connect components according to the provided schematic.
3. Open Serial Monitor at 9600 baud to view real-time distance data.
