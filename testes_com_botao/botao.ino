#define Led 2
#define Botao 3
byte ValorBotao = 0;

void setup() {
  pinMode(Led, OUTPUT);
  pinMode(Botao, INPUT);
}

void loop() {
  ValorBotao = digitalRead(Botao);
  if(ValorBotao == HIGH){
    digitalWrite(Led, HIGH);
  } else {
    digitalWrite(Led, LOW);
  }

}
