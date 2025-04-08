int IRledPin = 13; 

void setup() {
  pinMode(IRledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("Enviando sinal IR...");
  SendChannelUpCodeDesligar();

}

void loop() {
}


void pulseIR(long microsecs) {
  cli(); 
  while (microsecs > 0) {
    digitalWrite(IRledPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(IRledPin, LOW);
    delayMicroseconds(10);
    microsecs -= 26;
  }
  sei(); 
}

void SendChannelUpCodeDesligar() {
  delayMicroseconds(62284);
pulseIR(6860);
delayMicroseconds(3460);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(1360);
pulseIR(360);
delayMicroseconds(480);
pulseIR(360);
delayMicroseconds(1380);
pulseIR(380);
delayMicroseconds(440);
pulseIR(380);
delayMicroseconds(1380);
pulseIR(340);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(400);
delayMicroseconds(1320);
pulseIR(400);
delayMicroseconds(440);
pulseIR(420);
delayMicroseconds(440);
pulseIR(420);
delayMicroseconds(420);
pulseIR(440);
delayMicroseconds(1320);
pulseIR(400);
delayMicroseconds(420);
pulseIR(440);
delayMicroseconds(420);
pulseIR(420);
delayMicroseconds(440);
pulseIR(440);
delayMicroseconds(1320);
pulseIR(340);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(400);
delayMicroseconds(440);
pulseIR(420);
delayMicroseconds(460);
pulseIR(380);
delayMicroseconds(460);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);
delayMicroseconds(480);
pulseIR(400);
delayMicroseconds(1320);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);
delayMicroseconds(480);
pulseIR(400);
delayMicroseconds(420);
pulseIR(420);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(1300);
pulseIR(440);
delayMicroseconds(420);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(440);
pulseIR(420);
delayMicroseconds(460);
pulseIR(360);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(460);
pulseIR(380);
delayMicroseconds(500);
pulseIR(360);
delayMicroseconds(500);
pulseIR(360);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(360);
delayMicroseconds(460);
pulseIR(420);
delayMicroseconds(440);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(1320);
pulseIR(400);
delayMicroseconds(1320);
pulseIR(400);
delayMicroseconds(1320);
pulseIR(360);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);

}
