//V GUARD HEAT HEATER//
//CONSULTANCY PROJECT DONE BY KPR INSTITUTE OF ENGINEERING AND TECHNOLOGY COLLEGE ECE STUDENTS//

//import all required libraries
#include <SPI.h>
#include <WiFi.h> // esp32 library
#include <IOXhop_FirebaseESP32.h>
#include <Wire.h>

#define FIREBASE_HOST "https://heat-pump-vguard-default-rtdb.firebaseio.com/" // the project name address from firebase id
#define FIREBASE_AUTH "tnbCzgl50LhHCEe56iH7FkkkGdv5SqhuaRLCGteO" // the secret key generated from firebase

#define WIFI_SSID "iOS" // input your home or public wifi name
#define WIFI_PASSWORD "Kpriet@641407" //password of wifi

String fireStatus = "";

const float  OffSet = 0.483 ;
float V, P;
int On_Off = 0;
int relay = 16;


#include <OneWire.h>
#include <DallasTemperature.h>
// Data wire is plugged into digital pin 2 on the Arduino
#define ONE_WIRE_BUS 4

// Setup a oneWire instance to communicate with any OneWire device
OneWire oneWire(ONE_WIRE_BUS);

// Pass oneWire reference to DallasTemperature library
DallasTemperature sensors(&oneWire);

int deviceCount = 0;
float tempC;

#define SENSOR1  33
#define SENSOR2  25


float temp2;
float temp1;
int tds1;
float kwh;
float pressure;
float volt;
long tm2;
long tm1;
int swh;

//Millis function variables
long currentMillis = 0;
long previousMillis = 0;
int interval = 1000;
boolean ledState = LOW;
float calibrationFactor = 4.5;
volatile byte pulseCount;
byte pulse1Sec = 0;
float flowRate;
unsigned int flowMilliLitres;
unsigned long totalMilliLitres;

long currentMillis1 = 0;
long previousMillis1 = 0;
int interval1 = 1000;
boolean ledState1 = LOW;
float calibrationFactor1 = 4.5;
volatile byte pulseCount1;
byte pulse1Sec1 = 0;
float flowRate1;
unsigned int flowMilliLitres1;
unsigned long totalMilliLitres1;


#include "EmonLib.h"   //https://github.com/openenergymonitor/EmonLib
EnergyMonitor emon;
#define vCalibration 106.8
#define currCalibration 4.5
float kWh = 0;
unsigned long lastmillis = millis();

int tds_sensor = 32;
int pressure_sensor = 26;

void IRAM_ATTR pulseCounter()
{
  pulseCount++;
}

void IRAM_ATTR pulseCounter1()
{
  pulseCount1++;
}

void myTimerEvent() {
  emon.calcVI(20, 2000);
  Serial.print("Vrms: ");
  Serial.print(emon.Vrms, 2);
  Serial.print("V");
  Serial.print("\tIrms: ");
  Serial.print(emon.Irms, 4);
  Serial.print("A");
  Serial.print("\tPower: ");
  Serial.print(emon.apparentPower, 4);
  Serial.print("W");
  Serial.print("\tkWh: ");
  kWh = kWh + emon.apparentPower * (millis() - lastmillis) / 3600000000.0;
  Serial.print(kWh, 4);
  Serial.println("kWh");
  lastmillis = millis();

}

void setup() {
  Serial.begin(9600);
  sensors.begin();


  pinMode(SENSOR1, INPUT_PULLUP);
  pinMode(SENSOR2, INPUT_PULLUP);
  pinMode(tds_sensor, INPUT);
  pinMode(pressure_sensor, INPUT);
  pinMode(relay, OUTPUT);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD); //try to connect with wifi

  Serial.print("Connecting to ");

  Serial.print(WIFI_SSID);

  while (WiFi.status() != WL_CONNECTED) {

    Serial.print(".");

    //  delay(1);

  }

  Serial.println();

  Serial.print("Connected to ");

  Serial.println(WIFI_SSID);

  Serial.print("IP Address is : ");

  Serial.println(WiFi.localIP()); //print local IP address

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  pulseCount = 0;
  flowRate = 0.0;
  flowMilliLitres = 0;
  totalMilliLitres = 0;
  previousMillis = 0;

  pulseCount1 = 0;
  flowRate1 = 0.0;
  flowMilliLitres1 = 0;
  totalMilliLitres1 = 0;
  previousMillis1 = 0;

  attachInterrupt(digitalPinToInterrupt(SENSOR1), pulseCounter, FALLING);
  attachInterrupt(digitalPinToInterrupt(SENSOR2), pulseCounter1, FALLING);

  emon.voltage(35, vCalibration, 1.7); // Voltage: input pin, calibration, phase_shift
  emon.current(34, currCalibration); // Current: input pin, calibration.

}

void loop() 
{
  swh = Firebase.getInt("/heatpump/switch");
  Serial.print("Relay : ");
  Serial.println(swh);

  sensors.requestTemperatures();
  myTimerEvent();


  if (swh == 1) {        //automatic on & manual off
    digitalWrite(relay, HIGH);
  }
  else if (swh == 0) {
    digitalWrite(relay, LOW);
  }

  float tempC_1 = sensors.getTempCByIndex(0) + 2;
  float tempC_2 = sensors.getTempCByIndex(1) + 1;
  Serial.println(tempC_1);
  Serial.println(tempC_2);
  delay(1000);


  currentMillis = millis();
  if (currentMillis - previousMillis > interval) {

    pulse1Sec = pulseCount;
    pulseCount = 0;
    flowRate = ((1000.0 / (millis() - previousMillis)) * pulse1Sec) / calibrationFactor;
    previousMillis = millis();
    flowMilliLitres = (flowRate / 60) * 1000;
    totalMilliLitres += flowMilliLitres;
    Serial.println(totalMilliLitres);

  }

  currentMillis1 = millis();
  if (currentMillis1 - previousMillis1 > interval1) {

    pulse1Sec1 = pulseCount1;
    pulseCount1 = 0;
    flowRate1 = ((1000.0 / (millis() - previousMillis1)) * pulse1Sec1) / calibrationFactor1;
    previousMillis1 = millis();
    flowMilliLitres1 = (flowRate1 / 60) * 1000;
    totalMilliLitres1 += flowMilliLitres1;
    Serial.println(totalMilliLitres1);

    V = analogRead(pressure_sensor ) * 5.0 / 1024.0;    //Sensor output voltage
    P = (V - OffSet) * 250;             //Calculate water pressure

    Serial.print("Voltage:");
    Serial.print(V, 3);
    Serial.println("V");
    //
    Serial.print(" Pressure:");
    Serial.print(P, 1);
    Serial.println(" KPa");
    Serial.println();

  }

  int tds = analogRead(tds_sensor);
  Serial.println(tds);
  Serial.print(kWh, 4);

  {

    Firebase.setFloat   ("/heatpump/temp2", tempC_2);
    Firebase.setFloat("/heatpump/temp1", tempC_1);
    Firebase.setInt("/heatpump/tds1", tds );
    Firebase.setFloat("/heatpump/kwh", kWh, 4);
    Firebase.setFloat("/heatpump/pressure", P, 1);
    Firebase.setFloat("/heatpump/volt", V, 3);
    Firebase.setInt("/heatpump/tm2", totalMilliLitres1);
    Firebase.setInt("/heatpump/tm1", totalMilliLitres);
  }
}
