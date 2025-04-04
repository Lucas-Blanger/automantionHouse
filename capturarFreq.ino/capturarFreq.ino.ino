#include <IRremote.h>

const int RECV_PIN = 2;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);
}

void loop() {
  if (IrReceiver.decode()) {
    IrReceiver.printIRResultRawFormatted(&Serial, true);  // Mostra o sinal em formato bruto
    Serial.println();
    IrReceiver.resume();  // Espera pelo próximo sinal
  }
}
