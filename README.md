# AI for Disaster Response and Management (Object Following Bot)

## Project Overview
PS2: Create an AI-driven system to predict natural disasters using satellite imagery and real-time sensor data, aiding proactive response and resource allocation
: The Object Following Bot is an Arduino-based robotic system designed to autonomously follow objects while maintaining a safe distance. The bot utilizes ultrasonic sensors to detect objects in its surroundings and adjusts its movements to avoid collisions, exemplifying how robotics and sensor integration can solve real-world problems.

## Features
- **Object Detection:** Detects objects ahead using ultrasonic sensors.
- **Safe Distance Maintenance:** Maintains a predefined distance from the detected object to prevent collisions.
- **Autonomous Following:** Tracks and follows an object as it moves in different directions (right, left, or forward).

## Components
- **Arduino Microcontroller(Arduino Uno)**
- **Motor Shield (or L293D IC)**
- **Ultrasonic Sensors (HC-SR04 or similar)**
- **DC Motors (BO Motors)**
- **Wheels (2 regular + 1 castor wheel)**
- **Power Source (battery pack or power supply)**
- **Breadboard (optional for prototyping)**
- **Jumper Wires**
- **Chassis or Frame for the bot**

## Working Mechanism
1. **Object Detection:** Ultrasonic sensors emit waves, and the time taken for the waves to return determines the object's distance.
2. **Movement:** Based on the distance detected, the bot either moves forward or adjusts its direction (left/right) to follow the object.
3. **Safe Distance:** If the object is too close, the bot stops moving to avoid collisions.

## Real-World Applications
- **Disaster Response:** The bot can be adapted for search-and-rescue operations in disaster-hit areas using sensors for survivor detection.
- **Surveillance:** The bot can be configured for surveillance purposes, integrating a camera to track an intruder’s movement.

## Setup and Installation
1. Assemble the bot as per the provided design instructions.
2. Connect the components (motors, sensors, and motor shield) to the Arduino.
3. Power the bot using a battery pack or power supply.
4. Upload the Arduino code for controlling motor speed and direction based on sensor inputs.

## How to Use
- Power the bot and ensure it's operating in an obstacle-free environment.
- The bot will autonomously follow objects detected by the ultrasonic sensors within a predefined range.
- Adjust distance thresholds in the code for fine-tuning movement and stopping distance.

## Learning and Insights
- **Interdisciplinary Skills:** The project enhances knowledge in robotics, electronics, programming (Arduino), and sensor integration.
- **Sensor Integration:** Understanding how to integrate and interpret data from ultrasonic sensors is a critical aspect.
- **Algorithm Development:** Developing algorithms for object detection and decision-making improves problem-solving skills.
- **Real-World Relevance:** The project’s concepts can be applied to autonomous vehicles, industrial automation, or assistive robotics.

## Conclusion
The Object Following Bot combines the power of Arduino, sensors, and motors to autonomously follow objects while avoiding collisions, demonstrating the potential of simple yet effective robotic systems.

## Contributors
- Shreyash Chaudhary
- Jinay Patel
- Dharmil Halpati
