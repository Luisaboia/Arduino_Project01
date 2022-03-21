// Será executado apenas uma vez no iníco do código do programa
void setup()
{
  // Declara a porta X como saída (Output)
  pinMode(2, OUTPUT);
}

// Executa o código infinitamente
void loop()
{
  // Manda um valor de tensão para a porta 2
  digitalWrite(2, HIGH);
  delay(1000); // Espere 1000 milissegundos
  digitalWrite(2, LOW);
  delay(1000); // Espere por 1000 milissegundos
}
