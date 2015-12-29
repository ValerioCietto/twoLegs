/* 
 Two legged robot
 @Author Valerio Cietto
*/

#include <Servo.h>

Servo front;  // create servo object to control a servo
Servo rear;

int del=100;
int rearmin=20;
int rearmax=rearmin+60;

void setup()
{
  front.attach(3);  // attaches the servo on pin 3 to the servo object
  rear.attach(9);  // attaches the servo on pin 6 to the servo object
  front.write(90);
  rear.write(90);
  
  
}

void loop() 
{ 
  
  front.write(60);
  delay(del);
  rear.write(rearmin);
  delay(del);
  front.write(120);
  delay(del);
  rear.write(rearmax);
  delay(del);
  
} 
