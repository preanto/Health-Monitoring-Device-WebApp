#include <Wire.h>
#include "MAX30100_PulseOximeter.h"

PulseOximeter pox;
uint32_t tsLastReport = 0;

void onBeatDetected() {
  Serial.println("BEAT");
}

void setup() {
  Serial.begin(115200);
  Wire.begin(4, 5);  // ESP8266 SDA, SCL pins

  if (!pox.begin()) {
    Serial.println("Sensor init failed");
    while (1);
  }

  pox.setIRLedCurrent(MAX30100_LED_CURR_50MA);
  pox.setOnBeatDetectedCallback(onBeatDetected);
}

void loop() {
  pox.update();

  if (millis() - tsLastReport > 100) {
    float hr = pox.getHeartRate();
    float spo2 = pox.getSpO2();
    int ecg = analogRead(A0);  // ECG to A0

    // CSV format: HR,SpO2,ECG
    Serial.print(hr); Serial.print(",");
    Serial.print(spo2); Serial.print(",");
    Serial.println(ecg);

    tsLastReport = millis();
  }
}
