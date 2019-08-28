#include<Servo.h>
Servo s;
int input = A0;
int output = 9;
void setup() {
pinMode(A0,INPUT);
pinMode(output,OUTPUT);
s.attach(9);

}

void loop() {
int value = analogRead(input);
Serial.println(value);
int threshold = 500;
if(value<threshold)
{
  for (int i=0;i<180;i++)
  {
    s.write(i);
    delay(30);
   
  }
  for(int i=180;i>0;i--)
  {
    s.write(i);
    delay(30);
    
  }
}
Serial.println(value);
}
