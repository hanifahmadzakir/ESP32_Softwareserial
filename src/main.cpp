#include <Arduino.h>//wajib ada kalo pake Platformio
#include <SoftwareSerial.h> //Library yang di download EspSoftwareSerial

SoftwareSerial rs485(16,17);// 16 pin RX, 17 pin TX , nama rs485 boleh di ganti bebas

void setup(){
  Serial.begin(115200);
  rs485.begin(115200);//inisialisasi software serial
}

void loop(){

  Serial.println("Hello Serial1");
  rs485.println("Hello RS485");
}