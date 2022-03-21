void setup()
{
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  analogWrite(3, 255);
  analogWrite(6, 0);
  analogWrite(5, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(3, 51);
  analogWrite(6, 51);
  analogWrite(5, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(3, 51);
  analogWrite(6, 240);
  analogWrite(5, 0);
  delay(1000);
}
