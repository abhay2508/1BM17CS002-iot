int ledpin = 13; 
int buzzer = 8;
int pin=0;
void setup() {
pinMode(ledpin,OUTPUT);
pinMode(pin,INPUT);
Serial.begin(9600);


}

void loop() {
int value = analogRead(pin);
Serial.println(value);
int threshold = 300;
if(value<threshold)
{
  digitalWrite(ledpin,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(ledpin,LOW);
  
}

}
