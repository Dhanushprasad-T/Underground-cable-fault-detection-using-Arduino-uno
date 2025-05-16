/*
  Underground Cable Fault Detection using Voltage Drop Method
  Based on resistance and voltage drop across cable segments

  Author: Dhanush prasad T
  Date: 2025-04-01
*/

const int numSegments = 5;                 // Number of cable segments
const int analogPins[numSegments] = {A0, A1, A2, A3, A4}; // Analog pins for segments
float voltageReadings[numSegments];        // Store voltage drops
float threshold = 2.0;                     // Fault threshold voltage (adjust based on system)

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < numSegments; i++) {
    pinMode(analogPins[i], INPUT);
  }
  Serial.println("Underground Cable Fault Detection Initialized");
}

void loop() {
  readVoltages();
  detectFault();
  delay(1000); // Update every second
}

void readVoltages() {
  for (int i = 0; i < numSegments; i++) {
    int analogValue = analogRead(analogPins[i]);
    voltageReadings[i] = (analogValue * 5.0) / 1023.0; // Convert ADC to voltage
  }
}

void detectFault() {
  Serial.println("Voltage Readings (V):");
  for (int i = 0; i < numSegments; i++) {
    Serial.print("Segment ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.print(voltageReadings[i], 2);
    Serial.println(" V");

    if (voltageReadings[i] < threshold) {
      Serial.print("⚠️ Fault Detected at Segment ");
      Serial.println(i + 1);
      break; // Stop at first fault detected
    }
  }
  Serial.println("-----------------------");
}