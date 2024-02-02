\*KPRIET LAWN SPRINKLER PROJECT*
PROJECT DONE BY KPR INSTITUTE OF ENGINEERING AND TECHNOLOGY COLLEGE ECE 2024 BATCH STUDENTS*/


//import all required libraries
#include <SPI.h>
#include <WiFi.h> // esp32 library
#include <IOXhop_FirebaseESP32.h>    
#include <Wire.h>

#define FIREBASE_HOST "https://lawn-kpriet-default-rtdb.firebaseio.com/" // the project name address from firebase id
#define FIREBASE_AUTH "6x7RgPvOSYQYIsIRnFBVxK4DLVgSEovx5OBd8vFh" // the secret key generated from firebase

#define WIFI_SSID "Speed 2G" // input your home or public wifi name
#define WIFI_PASSWORD "apple1234" //password of wifi ssid

String fireStatus = ""; // led status received from firebase
//Define FirebaseESP32 data object


int sensorValue;  
int limit = 4000;
int rainSensor;

String rainStatus;
String Automatic;   //auto control of fbdb
String Manual;        //manual control of fbdb



void setup() {
  Serial.begin(9600);

  pinMode(5,OUTPUT);
  pinMode(34,INPUT);
  pinMode(33,INPUT);
digitalWrite(5,HIGH);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD); //try to connect with wifi

  Serial.print("Connecting to ");

  Serial.print(WIFI_SSID);

  while (WiFi.status() != WL_CONNECTED) {

    Serial.print(".");

  }

  Serial.println();

  Serial.print("Connected to ");

  Serial.println(WIFI_SSID);

  Serial.print("IP Address is : ");

  Serial.println(WiFi.localIP()); //print local IP address

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH); // connect to firebase

                                   //send initial string of led status


}

void loop()
{  

if(WiFi.status() != WL_CONNECTED) { 
  digitalWrite(5,HIGH);
}
else{
{
sensorValue = analogRead(34);
 Serial.print("Moisture Value : ");
 Serial.println(sensorValue);
 delay(250);

 rainSensor = analogRead(33);
 Serial.print("Raining level : ");
 Serial.println(rainSensor);
 delay(250); 

 delay(250);
}

  {
  Automatic = Firebase.getString("/lawn/auto");
  Serial.print("Automation : ");
  Serial.println(Automatic);
 
  Manual = Firebase.getString("/lawn/manual");
  Serial.print("Manual Status : ");
  Serial.println(Manual);
  }
                 //check automatic or manual

 if(Automatic=="1"){            //automatic on & manual off      

 if(rainSensor<500){ //check rain status

 rainStatus = "No_Rain";

 if(sensorValue>1800 )   //(sensorValue1>1500 | sensorValue2>1500)
 {
 digitalWrite(5,LOW);
 }
 else if(sensorValue<1500 )  
 {
 digitalWrite(5,HIGH);
 }
 }
 else  //run if there is rain
  {
 digitalWrite(5,HIGH);
 rainStatus = "Raining";
  }
 }      

  
 else if(Automatic=="0")            //manual on & automatic off  
  {
   if(Manual=="1") {
   digitalWrite(5,LOW);
   }
   else if(Manual=="0") {
   digitalWrite(5,HIGH);
   }
  }

  {
  Firebase.setInt("/lawn/moisture",sensorValue);
  Firebase.setString("/lawn/rain",rainStatus);
  }
}
}
//else{
//  digitalWrite(5,HIGH);
// }
}
