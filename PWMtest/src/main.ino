//A simple program to use FRC Jaguwires motor contolers with arduino.
//Will be the basis for the ardion to arduion robort. Magic some may say.


#include <Servo.h>

int motorPin = 10;

Servo myservo;

int potPin = 0;
int potPinAmount;
int outPower;

void setup()
{
  TCCR1B = TCCR1B & 0b11111000 | 0x04; // PWM Freq. at 122Hz
  myservo.attach(motorPin);
  myservo.write(90);  // Start in neutral
  Serial.begin(9600);
}

void loop()
{

    //potPinAmount = analogRead(potPin);

    myservo.write((analogRead(potPin)) / 4);
    //myservo.write(100); // forward
    //myservo.write(80); // reverse
    //myservo.write(90); // neutral
}
