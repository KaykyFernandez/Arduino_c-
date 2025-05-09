// C++ code
//
int counter;

int counter2;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  for (counter = 0; counter < 5; ++counter) {
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  for (counter2 = 0; counter2 < 5; ++counter2) {
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}