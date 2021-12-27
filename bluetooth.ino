#include "SoftwareSerial.h"
SoftwareSerial myBlue(2, 3);

void setup() {
  Serial.begin(9600);
  Serial.println("***HC-06 ready***");

  myBlue.begin(9600);
  Serial.println("BT serial is ready");
}


void loop() {
  if(myBlue.available()){
    Serial.write(myBlue.read());
  }
  if (Serial.available()){
    myBlue.write(Serial.read());
  }
}
