int input = A0;
int ledpin = 13;
void setup() {
pinMode(0,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);

}

void loop() {
  int value = analogRead(input);
  Serial.println(value);
  int threshold = 500;
  if (value < threshold)
  digitalWrite(ledpin,HIGH);
  else
  digitalWrite(ledpin,LOW);
  

}
