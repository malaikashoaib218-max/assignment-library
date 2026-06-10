==========================================
STUDENT INFORMATION
==========================================
Name: Malaika Shoaib
Roll Number: BSCS-14-F25-48

==========================================
CHOSEN PROBLEM / TOPIC
==========================================
Smart Home Device State Management

==========================================
BRIEF DESCRIPTION (5 lines)
==========================================
1. This library manages smart home devices like lights, fans, and ACs.
2. It tracks device name, type, power consumption, and ON/OFF status.
3. Demonstrates function overloading with 3 different setPower() methods.
4. Demonstrates operator overloading with +, -, ==, <, and << operators.
5. Easily extensible for IoT/home automation systems.

==========================================
FEATURES DEMONSTRATED
==========================================
 Function Overloading (3 versions of setPower)
 Operator Overloading (+, -, ==, <, <<)
 No global variables
 No hardcoded outputs (interactive demo)
 Separate library (.h) from execution (main.cpp)

==========================================
HOW TO COMPILE AND RUN
==========================================
Using g++ compiler:
g++ main.cpp -o smartdevice
./smartdevice

Or any C++ compiler (C++11 or later)

==========================================
SAMPLE OUTPUT (Partial)
==========================================

========== SMART HOME DEVICE MANAGER ==========

--- FUNCTION OVERLOADING DEMO ---

Device 1: [ Living Room Light | Light | OFF | 60W | Brightness: 0% ]
Device 2: [ Bedroom Fan | Fan | OFF | 75W ]
Device 3: [ Main AC | AC | OFF | 1500W ]

--- Overloaded setPower() examples ---
Living Room Light power set to 80 watts
Living Room Light power set to 80 watts for 4 hours (320 watt-hours)
Living Room Light brightness set to 75.5%

--- OPERATOR OVERLOADING DEMO ---

Living Room Light turned ON
Bedroom Fan turned ON
Main AC turned OFF

After operations:
[ Living Room Light | Light | ON | 80W | Brightness: 0% ]
[ Bedroom Fan | Fan | ON | 75W ]
[ Main AC | AC | OFF | 1500W ]

(+) Total power of Living Light + Bed Fan: 155 watts
(-) Power difference: 1420 watts
(==) Are Living Light AND Bed Fan both ON? YES
(<)  Is Living Light (<) Main AC? Yes, lower power

(<<) Using stream operator directly: [ Living Room Light | Light | ON | 80W | Brightness: 0% ]

