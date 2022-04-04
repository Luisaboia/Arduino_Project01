int dist = 0;

long lerDistancia(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  dist = 0.01723 * lerDistancia(2, 3);
  Serial.println(dist);
  delay(10);
}
