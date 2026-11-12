🌡️ ESP32 Digital Weather Monitoring Station

Developed by Rajan Robotics

Learn • Build • Innovate

A simple and practical Digital Weather Monitoring Station using ESP32, DHT11 temperature and humidity sensor, and a 0.96-inch OLED display (SSD1306).

This project measures real-time temperature and relative humidity and displays the readings on an OLED screen.

📸 Project Overview

<!-- Add your working prototype photograph here -->"ESP32 Weather Monitoring Station" (Images/working_prototype.jpg)

🚀 Features

- Real-time temperature monitoring.
- Relative humidity measurement.
- 0.96-inch OLED display.
- Serial Monitor output.
- Automatic display refresh every 2 seconds.
- ESP32-based design with future IoT expansion possibilities.

🛠️ Components Required

S.No| Component| Quantity
1| ESP32 DevKit V1| 1
2| DHT11 Temperature & Humidity Sensor| 1
3| 0.96-inch OLED SSD1306 (I2C)| 1
4| Breadboard| 1
5| Jumper Wires| As required
6| USB Cable| 1

🔌 Circuit Connections

DHT11 Sensor to ESP32

DHT11 Pin| ESP32 Pin
VCC| 3.3V
DATA| GPIO 4
GND| GND

OLED Display to ESP32

OLED Pin| ESP32 Pin
VCC| 3.3V
GND| GND
SDA| GPIO 21
SCL| GPIO 22

Note: If using a bare DHT11 sensor, connect a 10KΩ pull-up resistor between DATA and VCC. Most sensor modules already include this resistor.

💻 Software Requirements

- Arduino IDE
- ESP32 Board Package
- USB driver compatible with your ESP32 board

Required Arduino Libraries

Install the following libraries through Arduino IDE Library Manager:

1. DHT sensor library – Adafruit
2. Adafruit Unified Sensor
3. Adafruit GFX Library
4. Adafruit SSD1306

📂 Project Structure

ESP32-Digital-Weather-Monitoring-Station/
│
├── Code/
│   └── ESP32_Weather_Station.ino
│
├── Circuit/
│   └── circuit_diagram.png
│
├── Images/
│   └── working_prototype.jpg
│
├── Videos/
│   └── demo_video_link.txt
│
├── README.md
│
└── LICENSE

⚙️ How to Run the Project

1. Install Arduino IDE.
2. Install the ESP32 board package.
3. Install all required libraries.
4. Connect the DHT11 sensor and OLED display according to the connection tables.
5. Open "ESP32_Weather_Station.ino".
6. Select ESP32 Dev Module under Tools → Board.
7. Select the appropriate COM port.
8. Upload the program.
9. Open Serial Monitor and select 115200 baud.
10. Observe temperature and humidity readings on the OLED display.

🖥️ Expected OLED Output

RAJAN ROBOTICS
------------------------
TEMP : 28.0 C

HUM  : 65.0 %
------------------------
Weather Monitor

The values shown above are illustrative. Actual readings depend on the environment.

🔬 Working Principle

The DHT11 sensor measures the surrounding temperature and relative humidity.

The ESP32 reads the sensor data through its GPIO interface and processes the readings.

The processed values are displayed on the SSD1306 OLED using I2C communication.

The display refreshes every two seconds.

🔮 Future Enhancements

- Wi-Fi-based weather monitoring.
- MQTT-based sensor data transmission.
- Mobile phone monitoring dashboard.
- Cloud data logging.
- Integration with BMP280 pressure sensor.
- IoT-based weather monitoring system.

🎓 Learning Outcomes

Through this project, students can learn:

- ESP32 programming using Arduino IDE.
- Digital sensor interfacing.
- GPIO configuration.
- I2C communication.
- OLED display programming.
- Temperature and humidity measurement.
- Practical IoT project development.

👨‍💻 Developed By

RAJAN ROBOTICS

Learn • Build • Innovate

Practical Electronics | Robotics | Embedded Systems | IoT | STEM

---

If you find this project useful, please ⭐ Star this repository and share it with other electronics enthusiasts!
