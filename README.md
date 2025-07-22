Projcet Title: Real-Time Health Monitoring System

Description: A USB-connected health monitoring system that displays ECG, Heart Rate, and SpO2 in real-time using a web-based dashboard. 
Built with ESP8266, AD8232 ECG, and MAX30100 Pulse Oximeter, this project streams health data via USB serial and visualizes it using Chart.js


| Component    | Description                          |
| ------------ | ------------------------------------ |
| ESP8266      | Wi-Fi Microcontroller Unit           |
| AD8232       | ECG Sensor for heart signal capture  |
| MAX30100     | Heart rate and SpO2 sensor           |
| Breadboard   | For prototyping and wiring           |
| Jumper Wires | For circuit connections              |
| USB Cable    | To power ESP8266 and connect via USB |

Main Features: 
1. Real-time ECG waveform plotting on the web using Chart.js
2. Displays heart rate (BPM) with alerts for bradycardia/tachycardia
3. Displays SpO2 (blood oxygen saturation) with low-level alerts
4. USB Serial communication from ESP8266 to Web App
5. Threshold-based warnings shown in red font on the interface


