#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,20,4);

int t = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
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
  lcd.init();
  lcd.backlight();
  pinMode(4, OUTPUT);
  // Serial.begin(9600);
}

void loop()
{
  digitalWrite(4, LOW);
  float dist;
  dist = 0.01723 * readUltrasonicDistance(2, 3);
  lcd.setCursor(0,0);
  lcd.print("======Medidor=======");
  lcd.setCursor(1, 2);
  lcd.print("Distancia: ");
  lcd.print(dist);
  if ((10 < dist) && (dist <= 50)){
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
  } else if ((5 < dist) && (dist <= 10)){
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(4, LOW);
  } else if (dist <= 5){
    digitalWrite(4, HIGH);
    delay(10);
    digitalWrite(4, LOW);
  }
  delay(10);
}
