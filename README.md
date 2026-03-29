# Pedestrian-traffic-light
Pedestrian traffic light system with LCD countdown timer built using Arduino Uno and simulated in Proteus 8.

# Pedestrian Traffic Light System

A simple pedestrian crossing traffic light built with Arduino Uno and simulated in Proteus 8. The system cycles through red, yellow, and green phases with a live countdown timer shown on a 16x2 LCD display.

# About the Project
This was made as part of learning embedded systems — specifically to get familiar with GPIO control, LCD interfacing, and timing logic on Arduino. The simulation runs entirely in Proteus 8 without any physical hardware.

The light follows a standard pedestrian crossing sequence:
- Red → wait for 60 seconds
- Green → safe to cross, 30 seconds
- Yellow → finish crossing, 5 seconds

The LCD shows the current phase message on the first line and counts down the remaining time on the second line.

# Components
- Arduino Uno
- 16x2 LCD (LM016L)
- Red, Yellow, Green LEDs
- 220Ω resistors × 3

# Software
- Arduino IDE
- Proteus 8 (simulation)




1. Open the `.ino` file in Arduino IDE and compile it
2. Load the generated `.hex` file into the Arduino component in Proteus
3. Run the simulation
