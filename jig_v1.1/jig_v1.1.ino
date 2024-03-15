#include <SoftwareSerial.h>

// Define MAX485 pins
#define RO 19 // Receiver Output
#define DI 18 // Driver Input
#define DE 4 // Driver Enable
#define RE 3 // Receiver Enable

SoftwareSerial modbusSerial(RO, DI); // RX, TX

void setup() {
  Serial.begin(9600);
  modbusSerial.begin(9600);
  pinMode(DE, OUTPUT);
  pinMode(RE, OUTPUT);
  digitalWrite(DE, LOW);
  digitalWrite(RE, LOW);
}

void loop() {
  readEnergyValue();
  delay(5000); // Delay for 5 seconds before reading again
}

void printDecimalValue(byte highByte, byte lowByte) {
  unsigned int value = (highByte << 8) | lowByte;
  Serial.print(value);
  Serial.print(" ");
}

void readEnergyValue() {
  // Modbus function code for reading holding registers is 0x03
  byte modbusFrame[] = {0x01, 0x03, 0x00, 0x0B, 0x00, 0x01, 0x44, 0x0B}; // Address 40111 in Modbus

  digitalWrite(DE, HIGH); // Enable transmitter
  digitalWrite(RE, HIGH); // Enable receiver

  modbusSerial.write(modbusFrame, sizeof(modbusFrame));

  delay(10); // Allow some time for the response to arrive

  digitalWrite(DE, LOW); // Disable transmitter
  digitalWrite(RE, LOW); // Disable receiver

  delay(1000); // Allow some time before reading the response

  while (modbusSerial.available() >= 2) {
    byte highByte = modbusSerial.read();
    byte lowByte = modbusSerial.read();
    printDecimalValue(highByte, lowByte);
  }
  Serial.println();
}