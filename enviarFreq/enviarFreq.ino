int IRledPin = 13; 

void setup() {
  pinMode(IRledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("Enviando sinal IR...");
  SendChannelUpCode();
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

void SendChannelUpCode() {
  delayMicroseconds(25860); pulseIR(6880); delayMicroseconds(3440); pulseIR(420);
  delayMicroseconds(460); pulseIR(380); delayMicroseconds(1320); pulseIR(400);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(1320); pulseIR(400);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(1320); pulseIR(400);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(1300); pulseIR(420);
  delayMicroseconds(1300); pulseIR(420); delayMicroseconds(460); pulseIR(400);
  delayMicroseconds(460); pulseIR(400); delayMicroseconds(440); pulseIR(420);
  delayMicroseconds(1300); pulseIR(420); delayMicroseconds(460); pulseIR(400);
  delayMicroseconds(460); pulseIR(380); delayMicroseconds(460); pulseIR(420);
  delayMicroseconds(1280); pulseIR(400); delayMicroseconds(480); pulseIR(380);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(1320); pulseIR(400);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(480); pulseIR(380);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(480); pulseIR(380);
  delayMicroseconds(1320); pulseIR(440); delayMicroseconds(440); pulseIR(400);
  delayMicroseconds(1300); pulseIR(420); delayMicroseconds(1300); pulseIR(440);
  delayMicroseconds(400); pulseIR(440); delayMicroseconds(440); pulseIR(420);
  delayMicroseconds(420); pulseIR(440); delayMicroseconds(1260); pulseIR(460);
  delayMicroseconds(420); pulseIR(440); delayMicroseconds(420); pulseIR(440);
  delayMicroseconds(420); pulseIR(440); delayMicroseconds(420); pulseIR(440);
  delayMicroseconds(420); pulseIR(440); delayMicroseconds(420); pulseIR(420);
  delayMicroseconds(440); pulseIR(400); delayMicroseconds(460); pulseIR(400);
  delayMicroseconds(460); pulseIR(400); delayMicroseconds(460); pulseIR(400);
  delayMicroseconds(1280); pulseIR(440); delayMicroseconds(460); pulseIR(400);
  delayMicroseconds(440); pulseIR(420); delayMicroseconds(440); pulseIR(420);
  delayMicroseconds(440); pulseIR(380); delayMicroseconds(480); pulseIR(380);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(480); pulseIR(380);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(480); pulseIR(380);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(480); pulseIR(380);
  delayMicroseconds(480); pulseIR(380); delayMicroseconds(480); pulseIR(360);
  delayMicroseconds(460); pulseIR(420); delayMicroseconds(440); pulseIR(400);
  delayMicroseconds(460); pulseIR(400); delayMicroseconds(460); pulseIR(400);
  delayMicroseconds(460); pulseIR(400); delayMicroseconds(460); pulseIR(400);
  delayMicroseconds(460); pulseIR(400); delayMicroseconds(460); pulseIR(400);
  delayMicroseconds(1320); pulseIR(400); delayMicroseconds(1320); pulseIR(360);
  delayMicroseconds(1340); pulseIR(380); delayMicroseconds(1360); pulseIR(360);
  delayMicroseconds(1360); pulseIR(360); delayMicroseconds(1340); pulseIR(360);
  delayMicroseconds(1380); pulseIR(360); delayMicroseconds(1360); pulseIR(360);
}
