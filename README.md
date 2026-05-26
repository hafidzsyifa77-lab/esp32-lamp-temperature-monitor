# ESP32 Lamp & Temperature Monitor

This project is an IoT-based system using ESP32 to control a lamp and monitor temperature in real-time.

## Features
- Control lamp via ESP32
- Read temperature sensor data
- Real-time monitoring
- WiFi-based communication (IoT concept)

## Components Used
- ESP32
- Temperature Sensor (DHT11)
- Relay Module
- Lamp 220v AC
- Arduino IDE
- Thunkable
- Firebase
- Adaptor 220VAC to 5VDC
- Power Outlet

## How It Works
1. ESP32 reads temperature data from the DHT11 sensor
2. Data is sent to Firebase over internet
3. User can monitor and control the system via a mobile app
4. ESP32 retrieves control commands from Firebase
5. System runs continuously in real-time

## Project Structure
- main.ino → main code
- wiring.jpg → circuit diagram
- README.md → project documentation

## Future Improvement
- Mobile app control UI improvement
- Cloud dashboard integration
- Auto temperature-based fan control

## Author
Hafidz Al Aminudin  
IoT & Embedded Systems Enthusiast
