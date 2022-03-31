int luz = 0; // Variável inteira para a Luz
int button = 0; // Variável inteira para o botão

void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, INPUT);
    pinMode(A0, INPUT); // AO -> Entrada de Dados
    Serial.begin(9600); // Liga o monitor serial
}

void loop()
{
    button = digitalRead(3);
    (button == 1) ? digitalWrite(2, HIGH) : digitalWrite(2, LOW);
    luz = analogRead(A0);
    Serial.println(luz); // Imprimir na tela e pular linha
    delay(10);
}