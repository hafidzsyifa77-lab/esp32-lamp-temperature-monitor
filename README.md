HEAD
| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-C5 | ESP32-C6 | ESP32-H2 | ESP32-P4 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- |

# _Sample project_

(See the README.md file in the upper level 'examples' directory for more information about examples.)

This is the simplest buildable example. The example is used by command `idf.py create-project`
that copies the project to user specified path and set it's name. For more information follow the [docs page](https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html#start-a-new-project)



## How to use example
We encourage the users to use the example as a template for the new projects.
A recommended way is to follow the instructions on a [docs page](https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html#start-a-new-project).

## Example folder contents

The project **sample_project** contains one source file in C language [main.c](main/main.c). The file is located in folder [main](main).

ESP-IDF projects are built using CMake. The project build configuration is contained in `CMakeLists.txt`
files that provide set of directives and instructions describing the project's source files and targets
(executable, library, or both). 

Below is short explanation of remaining files in the project folder.

```
├── CMakeLists.txt
├── main
│   ├── CMakeLists.txt
│   └── main.c
└── README.md                  This is the file you are currently reading
```
Additionally, the sample project contains Makefile and component.mk files, used for the legacy Make based build system. 
They are not used or needed when building with CMake and idf.py.

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
f406aaa35fe95bbd2339952f8afb0582d316e28c
