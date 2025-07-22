**Projcet Title: Real-Time Health Monitoring System**

**Description:** A USB-connected health monitoring system that displays ECG, Heart Rate, and SpO2 in real-time using a web-based dashboard. 
Built with ESP8266, AD8232 ECG, and MAX30100 Pulse Oximeter, this project streams health data via USB serial and visualizes it using Chart.js


| Component    | Description                          |
| ------------ | ------------------------------------ |
| ESP8266      | Wi-Fi Microcontroller Unit           |
| AD8232       | ECG Sensor for heart signal capture  |
| MAX30100     | Heart rate and SpO2 sensor           |
| Breadboard   | For prototyping and wiring           |
| Jumper Wires | For circuit connections              |
| USB Cable    | To power ESP8266 and connect via USB |

**Main Features: **
1. Real-time ECG waveform plotting on the web using Chart.js
2. Displays heart rate (BPM) with alerts for bradycardia/tachycardia
3. Displays SpO2 (blood oxygen saturation) with low-level alerts
4. USB Serial communication from ESP8266 to Web App
5. Threshold-based warnings shown in red font on the interface


**Circuit Diagram Connections Overview:**

| AD8232 Pin | ESP8266 Pin |
| ---------- | ----------- |
| OUTPUT     | A0          |
| GND        | GND         |
| 3.3V       | 3.3V        |

| MAX30100 Pin | ESP8266 Pin |
| ------------ | ----------- |
| SDA          | D2 (GPIO4)  |
| SCL          | D1 (GPIO5)  |
| GND          | GND         |
| VIN          | 3.3V        |

**Software Overview**
1. healthmonitoring.ino:
  a. Reads ECG values from AD8232 analog pin
  b. Reads Heart Rate and SpO2 from MAX30100 via I2C
  c. Sends comma-separated values over serial: HR,SPO2,ECG
2. index.html
  a. Connects to ESP8266 via Web Serial API
  b. Dynamically plots ECG in real-time using Chart.js
  c. Displays live values of HR and SpO2
  d. Issues alerts:⚠️ HR > 120 → High heart rate ⚠️ HR < 50 → Low heart rate ⚠️ SpO2 < 90 → Low oxygen saturation

**Getting Started**

  Open healthmonitoring.ino in Arduino IDE.
  Select Board: ESP8266 Generic
  Install required libraries: MAX30100_PulseOximeter, Wire.h
  Upload the sketch to ESP8266.
  
  🌐 Run Web Dashboard
  Open index.html in Google Chrome or Chromium-based browser.
  Click "Connect ESP via USB".
  Grant serial port access when prompted.
  View real-time Heart Rate, SpO2, and ECG graph.

**NOTE**
1. Web Serial API only works on secure contexts (HTTPS or localhost) in supported browsers like Chrome.
2. Ensure the COM port is not already open in Arduino Serial Monitor.
3. Sensor readings may vary depending on placement and movement — keep still for best results.

Feel Free to ask any questions at preanto15-5059@diu.edu.bd or sabitsworkshop@gmail.com

