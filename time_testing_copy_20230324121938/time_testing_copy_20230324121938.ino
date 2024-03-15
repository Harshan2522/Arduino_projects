#include <WiFi.h>
#include "time.h"
#include <Arduino.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_I2CDevice.h>
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>             // Arduino SPI library


#define TFT_MOSI 23  // SDA Pin on ESP32
#define TFT_SCLK 18  // SCL Pin on ESP32
#define TFT_CS   15  // Chip select control pin
#define TFT_DC    2  // Data Command control pin
#define TFT_RST   4  // Reset pin (could connect to RST pin)


// Initialize Adafruit ST7789 TFT library
Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 240
const char* ssid     = "harshan";
const char* password = "12345678";

const char* Tz= "time.nist.gov";
const char* ntpServer = "in.pool.ntp.org";
const long  gmtOffset_sec = 19800;
const int   daylightOffset_sec = 0;//GMT+5:30
void setup(){
  Serial.begin(115200);

  // Connect to Wi-Fi
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected.");
  
  // Init and get the time
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  printLocalTime();

  //disconnect WiFi as it's no longer needed
  //WiFi.disconnect(true);
  //WiFi.mode(WIFI_OFF);
  tft.init(240, 240, SPI_MODE2);    // Init ST7789 display 135x240 pixel
  tft.setRotation(3);  
  tft.fillScreen(ST77XX_WHITE);
 
  // Clear the buffer.
 // tft.clearDisplay();
  
  // Draw bitmap on the screen
 
 // tft.display();
}

void loop(){
  //delay(1000);
  
   //tft.invertDisplay(true);
   
   printLocalTime();
   Serial.println();
  

   delay(1000);
}

void printLocalTime(){
  struct tm *timeinfo;
  time_t rawtime;
   time (&rawtime);
   timeinfo = localtime (&rawtime);
  // if(!getLocalTime(&timeinfo)){
  //   Serial.println("Failed to obtain time");
  //   return;
  // }
  // Serial.println(&timeinfo, "%A, %B %d %Y %I:%M:%S");
  tft.setTextWrap(false);
  tft.fillScreen(ST77XX_BLACK);
  tft.setCursor(50, 50);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(3);
  //tft.drawString(&timeinfo,"%I:%M:%S");
  Serial.println(&timeinfo,"%s");
  delay(1000);
}

