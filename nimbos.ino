// Pinos dos sensores
const int pinoVazao = A0;  // Sensor de vazão (potenciômetro simulado)
const int pinoPeso = A1;   // Sensor de peso (célula de carga ou simulado)

// Pinos dos LEDs
const int ledVerde = 2;
const int ledAmarelo = 3;
const int ledVermelho = 4;

void setup() {
  Serial.begin(9600);

  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
}

void loop() {
  int vazao = analogRead(pinoVazao);  // 0 a 1023
  int peso = analogRead(pinoPeso);    // 0 a 1023

  Serial.print("Vazão: ");
  Serial.print(vazao);
  Serial.print(" | Peso: ");
  Serial.print(peso);

  if (peso >= 1014 || vazao < 300) {
    // ALAGADO
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    Serial.println(" | Situação:  ALAGADO");
  }
  else if (vazao < 400 || peso >= 400) {
    // POSSÍVEL ALAGAMENTO se a vazão estiver baixa (sem escoamento) ou peso médio
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    Serial.println(" | Situação:  POSSÍVEL ALAGAMENTO");
  }
  else {
    // OK (vazão alta e peso baixo)
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    Serial.println(" | Situação:  OK");
  }

  delay(300);
}
