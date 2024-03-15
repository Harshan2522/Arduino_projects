#include <Arduino.h>
#include <WiFi.h>
#include <Preferences.h>
#include <SPI.h>
#include <TFT_eSPI.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
#include "7seg20.h"
#include "Open_Sans_Regular_30.h"
#include "wifi.h"
#include "pill_images.h"
//--------NTP client variables---------
#define NTP_OFFSET 19800  // In seconds

#define NTP_INTERVAL 60 * 1000  // In miliseconds

#define NTP_ADDRESS "in.pool.ntp.org"
//-----------setups/intializing----------------//
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, NTP_ADDRESS, NTP_OFFSET); 

String H_M = "", dd = "", mm = "", yyyy = "", temp_date = "",formattedTime,formattedDate;
String take_pill="Take pill",Day ;

int index_date=0;
uint16_t day_count = 0; 
uint16_t hour ;
uint16_t mins;
bool image = false;
byte count =1;
const int Analog_channel_pin= 16;
const int Analog_channel_pin2= 15;
double ADC_VALUE = 0;
int ADC_VALUE2 =0,charging ;
double voltage_value = 0; 
 int percentage = 0;
void Current_day();
   const unsigned long eventInterval = 1000;
   unsigned long previousTime = 0;
  /* int Period = 1000;
   unsigned long time_now = 0;
   void print_time(unsigned long time_millis);*/
char daysOfWeek[8][10] = { "Sun,", "Mon,", "Tue,", "Wed,", "Thu,", "Fri,", "Sat," };
unsigned int colors[8]={0xF800, 0xFDA0,0xFFE0,0x07E0,0x001F, 0x780F,0x915C};
 int Tone[]={3000,3000,3000,5000};
int Tone2[]={2000,2000,2000,2000,2000,2000};
#define motor 1
#define ir_tx1 34
#define ir_tx2 35 
#define ir_rx1 41
#define ir_rx2 42
#define ir_value digitalRead(ir_rx1)
#define ir_value_02 digitalRead(ir_rx2)
#define red_rx 4

TFT_eSPI tft = TFT_eSPI();
#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 240
///////////////////////////////////////PIN CONFIGURATION//////////////////////////////////////////

#define TFT_MOSI 37  // SDA Pin on ESP32
#define TFT_SCLK 36  // SCL Pin on ESP32
#define TFT_CS 40  // Chip select control pin
#define TFT_DC 39     // Data Command control pin
#define TFT_RST 38    // Reset pin (could connect to RST pin)
#define Motor 25
#define Buzzer 21
#define red  4
#define green 5
#define blue 6
//////////////////////////////////////////////////////////////////////////////////////////////////
extern const uint16_t image_data_Image[900];
extern const uint16_t image_data_wifidisconnect[1600];
extern const uint16_t image_data_battery[720];
extern const uint16_t image_data_20ble[900];
extern const uint16_t image_data_hotspot[900]; 
extern const unsigned short bttry_100[720];
extern const unsigned short bttry_75[720];
extern const unsigned short bttry_50[720];
extern const unsigned short bttry_25[720];
struct pill{
  String date;
  String time;
  String device_ID;
  //String medic_ID;
  //String slot_No;  
};
struct pill pills[7];
int j,len=0;
byte Length=0;
//int status = WL_IDLE_STATUS;
Preferences pref;
//---assiging Access point name and passward----
const char *apssid = "etp45";
const char *passphrase = "";
//----assiging wifi name and passward----
const char* ssid = "Guest";
const char* password = "Preci@2022";

int packetSize=0;
int keyIndex = 0;
char packetbuffer[3000];
char packet[3000];
bool connected = false;
bool wifi_connect= false;
//----UDP------
unsigned int localPort = 6100;
WiFiUDP Udp;
int i; 
const byte buzzer = 33;
void spliting();
void eeprom_data();
//---------------------preference key names declaration in 2D array---------------
char  device[][9]={"device_1","device_2","device_3","device_4","device_5","device_6","device_7"};
char  medic[][8]={"medic_1","medic_2","medic_3","medic_4","medic_5","medic_6","medic_7"};
char  slot[][7]={"slot_1","slot_2","slot_3","slot_4","slot_5","slot_6","slot_7"};
char  timem[][7]={"time_1","time_2","time_3","time_4","time_5","time_6","time_7"};
char  date[][7]={"date_1","date_2","date_3","date_4","date_5","date_6","date_7"};
//----------------------------------------------------------------------------------
void compare_time(String);
void get_network_info(){
    if(WiFi.status() == WL_CONNECTED) {
        Serial.print("[*] Network information for ");
        Serial.println(ssid);
    }
}
int  temp_percen =0;
// void Wifi_connected(WiFiEvent_t event, WiFiEventInfo_t info){
//   Serial.println("Successfully connected to Access Point");
// }
// void Wifi_disconnected(WiFiEvent_t event, WiFiEventInfo_t info){
//   Serial.println("Disconnected from WIFI access point");
//   Serial.print("WiFi lost connection. Reason: ");
//   Serial.println(info.disconnected.reason);
//   Serial.println("Reconnecting...");
//   WiFi.begin(ssid, password);
// }e
void Motor1(){
   digitalWrite(motor,HIGH);
    delay(700);
    digitalWrite(motor,LOW);
}
void IRAM_ATTR toggleMotor(){
   delayMicroseconds(1500);
  digitalWrite(motor,LOW);
}
void setup()
{
    pinMode(ir_tx1,OUTPUT);
  pinMode(ir_tx2,OUTPUT);
  pinMode(ir_rx1,INPUT);
  pinMode(ir_rx2,INPUT);
  pinMode(motor, OUTPUT);
  pinMode(red_rx,OUTPUT); 
 
  pinMode(buzzer,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(Motor,OUTPUT);
  pinMode(Buzzer,OUTPUT);
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue,HIGH);
 Serial.begin(115200);
  pref.begin("medic",false);
  tft.init();
  tft.setRotation(3);
  tft.fillScreen(TFT_BLACK);
  tft.setSwapBytes(true);
  WiFi.onEvent(WiFiEvent);
  WiFi.mode(WIFI_AP_STA);
  WiFi.disconnect();
  WiFi.begin(ssid, password);
  Serial.println("\nConnecting");
  if(WiFi.status() != WL_CONNECTED){
  Serial.print(".");
  delay(100);
  }
  Serial.println("\nConnected to the WiFi network");
  get_network_info();
  WiFi.softAP(apssid,passphrase,1,0,1);
  Serial.print("Soft - AP IP address = ");
  Serial.println(WiFi.softAPIP());
  Serial.println(WiFi.localIP());
  Udp.begin(localPort);
  timeClient.begin();
  delay(1000);
  digitalWrite(ir_tx1,HIGH);// ir sensor
  digitalWrite(ir_tx2,HIGH);   // ir sensor
  //attachInterrupt(ir_rx1,toggleMotor,FALLING);
 //attachInterrupt(ir_rx2,toggleMotor,FALLING);  
}
void loop() { 
 // digitalWrite(motor,HIGH);
   timeClient.update();
   Current_day();
   formattedTime  = timeClient.getFormattedTime();
   tft.setFreeFont(&DSEG7_Classic_Bold_30);
   tft.setTextColor(TFT_WHITE, TFT_BLACK);
   hour =timeClient.getHours();
   mins =timeClient.getMinutes();
   if(mins == 1|| mins == 30){
     tft.pushImage(0,30,240,210,water);
     count=0;
     image = true;
    // buzzer();
   }
// else{
   
     //image = false;
  //}   
   packetSize = Udp.parsePacket();
   if (H_M != formattedTime.substring(0, 5)) {
    H_M = formattedTime.substring(0, 5);
    
     tft.drawString(H_M, 0, 0);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
  // ir_value = digitalRead(ir_rx1);
   //ir_value_02 = digitalRead(ir_rx2);
    compare_time(H_M); 
  // tft.setTextWrap(1,0);
  }
  
  if (packetSize ) {

    Serial.print("Received packet of size ");
    Serial.println(packetSize);
    Serial.print("From ");

    IPAddress remoteIP = Udp.remoteIP();
     Serial.print(remoteIP);
    Serial.print(", Port ->");
    Serial.println(Udp.remotePort());

    // read the packet into the packet buffer
     len = Udp.read(packetbuffer, 3000);
    Serial.println( packetbuffer);
    strcpy(packet,packetbuffer);
    if (len > 0) {
    packetbuffer[len] = 0;
    packet[len]=0;
    }
    Serial.println("After spliting:");
    spliting();
    Udp.beginPacket(Udp.remoteIP(), localPort);
    Udp.println("acknowledged"); 
    Serial.println((char *)packetbuffer);
     if(pref.getString("packet","0")!="0"){
       Udp.println(pref.getString("packet"));
      // Udp.write(packet,len);
       //Udp.write((char*)packet);
     }
     pref.putString("packet",packet);
    // packet="0";     
    // char packet[len];
    // strcpy(packet,packetbuffer);
    // Udp.write(packet);  
    Udp.endPacket(); 
    eeprom_data();
    delay(3000);
   // pref.end();
Serial.print("end of the spliting and storing function");
}
// if(WiFi.status() == WL_CONNECTION_LOST||WiFi.status() != WL_CONNECTED){
if(wifi_connect == true){
tft.pushImage(110, 0, 30, 30, image_data_Image);
}
else{
tft.pushImage(110, 0, 30, 30, image_data_wifidisconnect);
}
/*if(connected == true){
tft.pushImage(110, 0, 30, 30, image_data_hotspot);
}
else{
 tft.pushImage(110, 0, 30, 30, hotspot_disconnected);
}*/

}
 void WiFiEvent(WiFiEvent_t event){
  switch(event){
    case ARDUINO_EVENT_WIFI_AP_STACONNECTED:
      //when station connected to esp32 soft_ap
      Serial.print("soft_ap is connected to station. ");
      Serial.print("Turn OFF your internet for good connection..");
      Serial.println();
      connected = true ;
    break;
    case ARDUINO_EVENT_WIFI_AP_STADISCONNECTED:
     Serial.print("soft_ap is dis-connected from station");
     Serial.println();
     connected = false ;
     break;
    case ARDUINO_EVENT_WIFI_STA_CONNECTED:
     Serial.println("WiFi is connected to "+(String)ssid); 
     wifi_connect = true;
     break;
    case  ARDUINO_EVENT_WIFI_STA_DISCONNECTED:
     Serial.println("WiFi is dis-connected from "+(String)ssid);
    wifi_connect= false;    
     break;
    default:break;
  }

}

void spliting()
{
  i=0;
  Length = 0;
 // Serial.begin(115200);
//  char *mty = strtok(packetbuffer,"/");
	char *p= strtok(packetbuffer,"DF");
   
  while( p != NULL)
  {
        char temp[15];
        char * arr=p;
         Serial.println((char *)arr);
        p = strtok (NULL, "DF");
//------------storing device id data-------------     
      /*  strncpy(temp,&arr[0],2);
       temp[2]='\0';
        pref.putString((const char *)device[i],temp);
        Serial.print("stored device_ID data is -> ");
        Serial.println(pref.getString((const char *)device[i]));
//-----------Storing medic id data----------------
        strncpy(temp,&arr[3],9);
       temp[11]='\0';
        pref.putString((char const*)medic[i],temp);
        Serial.print("stored medication_ID data is -> ");
        Serial.println(pref.getString((const char*)medic[i]));*/
//--------------------storing slot data------------
        strncpy(temp,&arr[0],2);
        temp[2]='\0';  
        pref.putString((char const*)slot[i],temp);
        Serial.print("stored Slot_ID data is -> ");
        Serial.println(pref.getString((char*)slot[i]));
//----------------storing date data---------------
        strncpy(temp,&arr[2],8);
        temp[8]='\0'; 
        pref.putString((char const *)date[i],temp);
        Serial.print("stored date data is -> ");
        Serial.println(pref.getString((char*)date[i]));
//-----------------storing time data-----------
        strncpy(temp,&arr[10],5);
        temp[5]='\0'; 
        pref.putString((char const *)timem[i],temp);
        Serial.print("stored time data is -> ");
        Serial.println(pref.getString((char*)timem[i]));
        ++i;
        ++Length;
  }
}


void eeprom_data(){
  
  Serial.println("Now entering in to eeprom_data function");

for (j=0;j<Length;j++){
  Serial.println("number of array");
  Serial.println(j);
pills[j]={pref.getString((const char*)date[j]),pref.getString((const char*)timem[j]),pref.getString((const char*)slot[j])};
delay(200);
Serial.println( pills[j].date);
Serial.println( pills[j].time);
Serial.println( pills[j].device_ID);
delay(500);
}
Serial.println("data is successfully stored");

}

void compare_time(String H_M){
     
  if( H_M  == pills[0].time || H_M == pills[1].time ||H_M == pills[2].time || H_M == pills[3].time || H_M == pills[4].time || H_M == pills[5].time){
     digitalWrite(motor,HIGH);
     image = true;
     count = 0; 
     while(ir_value == 0 || ir_value_02== 0);//acts as a delay.
     Serial.println("");
     Serial.println("ir_value_01-->");
     Serial.println(ir_value);
     Serial.println("ir_value_02-->");
     Serial.println(ir_value_02);
            if( ir_value == 1 || ir_value_02== 1 )
           {
            Serial.println("ir detected"); 
            while(ir_value == 1 || ir_value_02== 1);
            Serial.println("");
            Serial.println("motor off"); 
            digitalWrite(motor,LOW);            
            //attachInterrupt(ir_rx1,toggleMotor,FALLING);
            //attachInterrupt(ir_rx2,toggleMotor,FALLING);   
           }            
   tft.pushImage(0,30,240,210,image_pill2);
for(int i =0;i<(sizeof(Tone)/sizeof(Tone[1]));i++){
  tone(buzzer,Tone[i],50);
  delay(100);
  }   
   }

  
/*   else if( H_M == pills[3].time ||H_M == pills[4].time ||H_M == pills[5].time){
     digitalWrite(motor,HIGH);
      image = true;
      count = 0;   
   if( ir_value == 1 || ir_value_02== 1 )
    {
            Serial.print("ir detected"); 
            attachInterrupt(ir_rx1,toggleMotor,FALLING);
            attachInterrupt(ir_rx2,toggleMotor,FALLING);         
    } 
   tft.pushImage(0,30,240,210,image_pill1);
  for(int i =0;i<(sizeof(Tone2)/sizeof(Tone2[1]));i++){
  tone(buzzer,Tone2[i],20);
  delay(60);
  //noTone(buzzer);
    }
   }*/
 else
 {
   noTone(buzzer);
   image = false;
 }  


}
void Current_day() {
  tft.setTextWrap(false);
  String formattedDate  = timeClient.getFormattedDate();
  //----------day of the week -------------------------
  // tft.setFreeFont(&Open_Sans_Regular_30);
  // tft.setTextColor(TFT_BLACK);
  // if(image != true){
  // tft.drawString(daysOfWeek[timeClient.getDay()], 5, 40);
  // }
  //---------- Current date-------------------
  index_date = formattedDate.indexOf("T"); 
  dd = formattedDate.substring(8, index_date);
  mm = formattedDate.substring(5, index_date - 3);
  Day=daysOfWeek[timeClient.getDay()];
  temp_date = (Day+dd + "/" + mm);
  tft.setTextColor(TFT_BLACK);
  if(image != true){
  tft.drawString(temp_date, 5, 45, 4);
  //tft.drawString(ADC_VALUE2, 100, 100, 4);
  }
   //------------blue tooth and battery image---------
   //tft.pushImage(140, 0, 30, 30, image_data_20ble);
   
  if (day_count != timeClient.getDay() ){
   day_count = timeClient.getDay();
   tft.fillRect(0,30,240,210,colors[timeClient.getDay()]);
   //tft.drawRect(240, 210, 240 , 210,  colors[timeClient.getDay()]);
  }
  if(image == false && count == 0 ){
    tft.fillRect(0,30,240,210,colors[timeClient.getDay()]);
    count =+1; 
  }
  charge();
}
void charge() 
{
ADC_VALUE = analogRead(Analog_channel_pin);

//Serial.println(ADC_VALUE);

delay(100);
//ADC_VALUE2= analogRead(Analog_channel_pin2);
/*Serial.print("ADC VALUE = ");
Serial.println(ADC_VALUE);
Serial.println(ADC_VALUE2);
delay(500);
voltage_value = (ADC_VALUE  *3.7)/(8191);
Serial.print("Voltage = ");
Serial.print(voltage_value);
Serial.print("volts");
delay(500);
charging = (voltage_value * 100)/(4.2);
Serial.print(charging);
tft.fillRect(150,100,60,60,colors[timeClient.getDay()]);
tft.drawNumber(ADC_VALUE,150,100,4);
tft.fillRect(70,70,60,60,colors[timeClient.getDay()]);
tft.drawNumber(ADC_VALUE2,70,70,4);*/
if (ADC_VALUE > 5700 && ADC_VALUE < 5850)
{
    tft.pushImage(200, 5, 36, 20, bttry_25);
}
 else if (ADC_VALUE > 5950 && ADC_VALUE < 6100)
{
  tft.pushImage(200, 5, 36, 20, bttry_50);
}
 else if (ADC_VALUE > 6200 && ADC_VALUE < 6400)
{
  tft.pushImage(200, 5, 36, 20,bttry_75);
}
else if (ADC_VALUE > 6400 && ADC_VALUE < 6500 )
{
  tft.pushImage(200, 5, 36, 20, bttry_100);
}
else if (ADC_VALUE > 6500 )
{
 tft.pushImage(200, 5, 36, 20, image_data_battery);
 
}
tft.setTextColor(TFT_WHITE, TFT_BLACK);
 int percentage = (ADC_VALUE *100 )/(8191);
if(ADC_VALUE < 6800 ){
   tft. drawNumber(percentage, 145, 0);
   
}  
 
 //tft. drawNumber(percentage, 145, 0);
}