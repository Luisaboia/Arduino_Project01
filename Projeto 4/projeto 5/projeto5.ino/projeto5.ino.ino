void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  Serial.println("Comece a medir.");
}

void loop() {
  int v;
  float soma = 0;
  float constante = 0.95;
  float dist;
  for (int i = 0; i < 4000; i++) {
    v = analogRead(A0);
    delay(1);
    soma = soma + v;
  }
  dist=(soma*constante)/10;
  Serial.println(dist);
  delay(20);

}
