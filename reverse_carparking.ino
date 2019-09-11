#include<LiquidCrystal.h>
const int trigpin = 3;
const int buzzer = 12;
const int echopin = 2;
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setCursor(8,8);
pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
long duration,inches,cm;
lcd.setCursor(0,1);
pinMode(trigpin,OUTPUT);
digitalWrite(trigpin, LOW);
delayMicroseconds(2);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);
pinMode(echopin,INPUT);
duration = pulseIn(echopin,HIGH);
inches = microsecondsToInches(duration);
cm=microsecondsToCentimeters(duration);
lcd.print(inches);
lcd.print("in, ");
lcd.print(cm);
lcd.print("cm");
if(inches < 6)
  {
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(buzzer, LOW);
  }

delay(1000);
}
long microsecondsToInches(long microseconds)
{
  return microseconds/74/2;
}
long microsecondsToCentimeters(long microseconds)
{
  return microseconds/29/2;
}
