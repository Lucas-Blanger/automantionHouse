#include <RCSwitch.h>

RCSwitch rf = RCSwitch();
bool enviado = false;

void setup() {
  Serial.begin(9600);           

  rf.enableTransmit(10);        
  rf.setProtocol(6);            
  rf.setPulseLength(463);       
  rf.setRepeatTransmit(15);     
}

void loop() {
  if (!enviado) {
    rf.send(194111141, 28);
    Serial.println("Sinal enviado!");
    enviado = true;
  }
}
