int outputpin=0;
void setup() {
Serial.begin(9600);
}

void loop() {
  
  int rawvoltage=analogRead(outputpin);
  float millivolts=(rawvoltage/1024.0)*5000;
  float celsius=millivolts/10;
  Serial.print(celsius);
  Serial.print("degree celsius");
  Serial.print((celsius*9)/5+32);
  Serial.print("degrees farhenheit");
  delay(1000);
  

}
