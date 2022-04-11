#include <Servo.h>

Servo servo_4;

void setup()
{
  servo_4.attach(4, 500, 2500);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  servo_4.write(90);
  Serial.begin(9600);
}

void loop()
{
  int luz;
  luz = analogRead(A0);


  Serial.println(luz);

  if (luz < 200)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  }
  else
  {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  }
}
