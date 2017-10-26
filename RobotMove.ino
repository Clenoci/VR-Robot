#include <AFMotor.h>
#include <Servo.h> 


AF_DCMotor motor(1);// DC motor on M1
AF_DCMotor motor2(2);// DC motor on M2
AF_DCMotor motor3(3);// DC motor on M3
AF_DCMotor motor4(4);// DC motor on M4

Servo servo1; // Servo motor on servo port 1

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
 
  Serial.println("Motor test!");//prints data to serial port

  servo1.attach(10);
  
}
void loop() {
  //Move robot forward - trying for 4 inches at a time.
  motor.run(FORWARD);
  motor.setSpeed(150);
  motor2.run(FORWARD);
  motor2.setSpeed(150);
  motor3.run(FORWARD);
  motor3.setSpeed(150);
  motor4.run(FORWARD);
  motor4.setSpeed(150);
  
  Serial.println("Motors ON"); // confirms Motors are on
  delay(400); // running time needed to go 4inches.
//turn motors off
  motor.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
Serial.println("Motors OFF"); // confirms Motors are off.
servo1.write(90);
delay (1000);
servo1.write(180);
delay (1000);
servo1.write(90);
delay(1000);
servo1.write(0);
delay(1000);
servo1.write(90);
  /*for (int i=90; i<180; i++) {
    servo1.write(i);
    delay(1000);
 }
 delay(1000);
 for (int i=180; i>90; i--) {
    servo1.write(i);
    delay(50);
 }
 delay(1000);
 for (int i=90; i>0; i--) {
    servo1.write(i);
    delay(50);
 }

  for (int i=0; i<90; i++) {
    servo1.write(i);
    delay(50);
 }
 
*/
 
  delay(10000); // delay while cameras rotate
}
