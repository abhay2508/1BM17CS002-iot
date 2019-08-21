int ledpin=9;
int input=0;
void setup() {
pinMode(ledpin,OUTPUT);
pinMode(ledpin,INPUT);
Serial.begin(9600);
}

void loop() {
int sensedvalue=analogRead(input);
int convertedvalue=map(sensedvalue,0,1023,0,255);
analogWrite(ledpin,convertedvalue);
delay(1000);
Serial.println(sensedvalue);
Serial.println(convertedvalue);
}
