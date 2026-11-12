
/*
Created by Balaji for Rajan Robotics 
Rajan Robotics 

  Project : Digital Weather Monitoring Station
  Board   : ESP32 DevKit V1
  Sensor  : DHT11
  Display : 0.96 inch OLED SSD1306
  Author  : Rajan Robotics

  Learn | Build | Innovate
*/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

// DHT11 configuration
#define DHT_PIN 4
#define DHT_TYPE DHT11

// OLED configuration
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define OLED_ADDRESS 0x3C

// I2C pins
#define OLED_SDA 21
#define OLED_SCL 22

// Create objects
DHT dht(DHT_PIN, DHT_TYPE);

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  OLED_RESET
);

void setup()
{
  Serial.begin(115200);

  // Initialize I2C
  Wire.begin(OLED_SDA, OLED_SCL);

  // Initialize DHT11
  dht.begin();

  // Initialize OLED
  if (!display.begin(
        SSD1306_SWITCHCAPVCC,
        OLED_ADDRESS))
  {
    Serial.println("OLED initialization failed!");

    while (true)
    {
      delay(1000);
    }
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(1);
  display.setCursor(15, 10);
  display.println("RAJAN ROBOTICS");

  display.setCursor(20, 30);
  display.println("Weather Station");

  display.display();

  Serial.println("--------------------------");
  Serial.println("RAJAN ROBOTICS");
  Serial.println("Digital Weather Station");
  Serial.println("--------------------------");

  delay(2000);
}

void loop()
{
  // Read sensor values
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Check sensor readings
  if (isnan(temperature) || isnan(humidity))
  {
    Serial.println("DHT11 Sensor Error!");

    display.clearDisplay();
    display.setTextSize(1);
    display.setCursor(10, 20);
    display.println("Sensor Error!");
    display.display();

    delay(2000);
    return;
  }

  // Serial Monitor output
  Serial.println("--------------------------");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // OLED display
  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(15, 0);
  display.println("RAJAN ROBOTICS");

  display.drawLine(0, 12, 127, 12, SSD1306_WHITE);

  display.setTextSize(1);

  display.setCursor(0, 22);
  display.print("TEMP : ");
  display.print(temperature, 1);
  display.println(" C");

  display.setCursor(0, 38);
  display.print("HUM  : ");
  display.print(humidity, 1);
  display.println(" %");

  display.drawLine(0, 53, 127, 53, SSD1306_WHITE);

  display.setCursor(20, 56);
  display.println("Weather Monitor");

  display.display();

  // Refresh every 2 seconds
  delay(2000);
}
