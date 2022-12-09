#include <Servo.h>

Servo myservo;
Servo myservo1;

int laserPin = 12;
int laserPin1 = 13;

int pos = 0;

void setup() {
  myservo.attach(9);
  myservo1.attach(10);
  pinMode(laserPin, OUTPUT);
  pinMode(laserPin1, OUTPUT);
}

void loop() {

  digitalWrite(laserPin, HIGH);
  digitalWrite(laserPin1, HIGH);

  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);          
    delay(50); 
    myservo1.write(pos);          
    delay(50);                      
  }
  
  digitalWrite(laserPin, LOW);
  digitalWrite(laserPin1, LOW);
  
  myservo.detach();
  myservo1.detach();
}