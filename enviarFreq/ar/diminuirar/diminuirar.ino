int IRledPin = 13; 

void setup() {
  pinMode(IRledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("Enviando sinal IR...");
  SendChannelUpCodeDiminuir();

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

void SendChannelUpCodeDiminuir() {
delayMicroseconds(25896);
pulseIR(6780);
delayMicroseconds(3480);
pulseIR(400);
delayMicroseconds(460);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(1320);
pulseIR(420);
delayMicroseconds(1300);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(440);
pulseIR(420);
delayMicroseconds(440);
pulseIR(420);
delayMicroseconds(1320);
pulseIR(400);
delayMicroseconds(440);
pulseIR(420);
delayMicroseconds(440);
pulseIR(380);
delayMicroseconds(480);
pulseIR(440);
delayMicroseconds(1280);
pulseIR(380);
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
delayMicroseconds(1320);
pulseIR(400);
delayMicroseconds(480);
pulseIR(360);
delayMicroseconds(1360);
pulseIR(380);
delayMicroseconds(1320);
pulseIR(380);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(1320);
pulseIR(440);
delayMicroseconds(420);
pulseIR(420);
delayMicroseconds(440);
pulseIR(420);
delayMicroseconds(440);
pulseIR(400);
delayMicroseconds(440);
pulseIR(440);
delayMicroseconds(420);
pulseIR(440);
delayMicroseconds(420);
pulseIR(420);
delayMicroseconds(440);
pulseIR(400);
delayMicroseconds(460);
pulseIR(380);
delayMicroseconds(480);
pulseIR(380);
delayMicroseconds(480);
pulseIR(400);
delayMicroseconds(1320);
pulseIR(380);
delayMicroseconds(480);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(380);
delayMicroseconds(460);
pulseIR(380);
delayMicroseconds(500);
pulseIR(360);
delayMicroseconds(480);
pulseIR(400);
delayMicroseconds(460);
pulseIR(420);
delayMicroseconds(440);
pulseIR(400);
delayMicroseconds(460);
pulseIR(380);
delayMicroseconds(480);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(460);
pulseIR(400);
delayMicroseconds(420);
pulseIR(420);
delayMicroseconds(440);
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
pulseIR(420);
delayMicroseconds(440);
pulseIR(420);
delayMicroseconds(1300);
pulseIR(420);
delayMicroseconds(1300);
pulseIR(400);
delayMicroseconds(1300);
pulseIR(400);
delayMicroseconds(1340);
pulseIR(360);
delayMicroseconds(1340);
pulseIR(380);
delayMicroseconds(1360);
pulseIR(400);
delayMicroseconds(1300);
pulseIR(380);
delayMicroseconds(1340);
pulseIR(380);

}
