# Underground Cable Fault Detection using Arduino Uno

This project demonstrates a simple method for detecting faults in underground cables using the *resistance-based voltage drop method, implemented with an **Arduino Uno*. The system monitors voltage across different cable segments to determine where a fault has occurred.

---

## 🚀 Overview

Underground cable faults are difficult to detect using conventional manual inspection methods. This Arduino-based prototype detects such faults by measuring voltage drops across different segments of a cable (simulated using resistors). If a voltage reading from any segment falls below a defined threshold, a fault is flagged at that location.

---

## 🔧 Hardware Required

- Arduino Uno
- Fixed resistors (to simulate cable segments)
- Potentiometer or switch (to simulate a fault)
- Breadboard and jumper wires
- USB cable or external power supply
- LCD display for visual output

---

## ⚙ Circuit Description

Each cable segment is represented by a resistor. The Arduino reads the voltage between segments using its analog input pins (A0 to A4 in this example).

### 📉 Simple Diagram (Textual)

[5V] ---[R1]---[R2]---[R3]---[R4]---[R5]--- GND
| | | | |
A0 A1 A2 A3 A4

- R1–R5 simulate cable segments.
- Faults are simulated by lowering resistance or shorting segments.
- Voltage is measured using analog pins to detect drops.

---

## 💻 Arduino Code

The full source code is available in the UndergrouundCableFaultDetection.ino file. The code handles input from the ultrasonic and water sensors, and controls the buzzer and vibration motor based on the inputs.

🧪 How to Use
Assemble the circuit as per the above diagram.

Upload the code to the Arduino Uno using the Arduino IDE.

Open the Serial Monitor (set to 9600 baud).

Observe the voltage readings and fault messages in real time.

📊 Sample Output
markdown

Underground Cable Fault Detection Initialized

Voltage Readings (V):

Segment 1: 4.95 V

Segment 2: 4.92 V

Segment 3: 1.20 V

⚠ Fault Detected at Segment 3
-----------------------
📁 Project Structure

/underground-cable-fault-detection
├── underground_cable_fault_detection.ino
└── README.md
📌 Notes
Adjust the threshold value in the code according to your setup and voltage divider configuration.

The concept can be extended using GSM/GPS modules for real-world underground fault reporting systems.

🧑‍💻 Author
Your Name: Dhanush prasad T

GitHub: https://github.com/Dhanushprasad-T

📄 License
This project is licensed under the MIT License.
