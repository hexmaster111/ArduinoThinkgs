#include <Wire.h>

int a;
int b;
int motorPin = 10;

Servo myservo;


void setup(){
  Wire.begin(); // join i2c as master
  Serial.begin(9600);
  TCCR1B = TCCR1B & 0b11111000 | 0x04; // PWM Freq. at 122Hz
  myservo.attach(motorPin);
  myservor.write(0);
  Serial.begin();
}

void loop(){
Wire.requestFrom(4,2); // request from address 4, 2 byts
byte b,c;
b = Wire.read();
c = Wire.read();
//Serial.print(a);
//Serial.print(b);
delay(200);
}
