#include <Arduino.h> // Obrigatório no PlatformIO (VS Code)

// Definindo os pinos de I/O
const int pinoLED = 2;   // Output (Saída)
const int pinoBotao = 4; // Input (Entrada)

void setup()
{
  // Configura o pino do LED como SAÍDA
  pinMode(pinoLED, OUTPUT);

  // Configura o pino do botão como ENTRADA com PULLUP interno
  // (PULLUP mantém o pino em NÍVEL ALTO até ser ligado ao GND)
  pinMode(pinoBotao, INPUT_PULLUP);
}

void loop()
{
  // Lê o estado da entrada (HIGH/1 ou LOW/0)
  int estadoBotao = digitalRead(pinoBotao);

  // Se o botão for pressionado (conectado ao GND), o estado fica LOW
  if (estadoBotao == LOW)
  {
    digitalWrite(pinoLED, HIGH); // Liga o LED (Saída)
  }
  else
  {
    digitalWrite(pinoLED, LOW); // Desliga o LED (Saída)
  }
}