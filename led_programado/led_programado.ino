#define LedAmarelo 13
int tempo = 1000;
void setup() {
  pinMode(LedAmarelo, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++){
    digitalWrite(LedAmarelo, HIGH);
    delay(tempo);
    digitalWrite(LedAmarelo, LOW);
    delay(tempo);
  }
  delay(1000);

}
