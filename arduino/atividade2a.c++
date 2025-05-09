// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}