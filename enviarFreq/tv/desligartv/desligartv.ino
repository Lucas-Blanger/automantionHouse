int IRledPin = 13; 

void setup() {
  pinMode(IRledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("Enviando sinal IR...");
  SendChannelUpCodeDesligarTV();
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


void SendChannelUpCodeDesligarTV(){
  delayMicroseconds(51788);
pulseIR(9300);
delayMicroseconds(4620);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(560);
pulseIR(620);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(580);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(580);
delayMicroseconds(1780);
pulseIR(580);
delayMicroseconds(560);
pulseIR(560);
delayMicroseconds(1780);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(38940);
pulseIR(9280);
delayMicroseconds(4660);
pulseIR(560);
delayMicroseconds(600);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(600);
delayMicroseconds(560);
pulseIR(560);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(38980);
pulseIR(9260);
delayMicroseconds(4660);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(28664);
pulseIR(960);
delayMicroseconds(28248);
pulseIR(41364);

}
