//Muhammad Maulana yusuf
//1197070051
//Uas sismik B2
byte pinLDR = A1;
byte pinLampu = 12;

int lampuON = LOW;
int lampuOFF = HIGH;
int nilai;

void setup() {
  Serial.begin(9600);
  pinMode(pinLampu, OUTPUT);
  digitalWrite(pinLampu, lampuOFF);
}

void loop() {
  nilai = analogRead(pinLDR);
  Serial.print("Nilai LDR: ");
  Serial.println(nilai);

  if (nilai < 180) {
    digitalWrite(pinLampu, lampuON);
  }
  else {
    digitalWrite(pinLampu, lampuOFF);
  }
  delay(500);
}
