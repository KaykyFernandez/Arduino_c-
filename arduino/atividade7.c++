// C++ code
//

void setup()
{
  pinMode(7, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(7));
  
  digitalWrite(2,digitalRead(7));
  delay(100);
}