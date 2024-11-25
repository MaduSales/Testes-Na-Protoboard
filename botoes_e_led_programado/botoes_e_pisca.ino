



#define Led1 2
#define Led2 3
#define Led3 4
#define Led4 5

#define Botao1 8
#define Botao2 9

#define Tempo 250
byte ValorBotao1 = 0;
byte ValorBotao2 = 0;
int tempo = 200;


void setup() {
  pinMode(Botao1, INPUT);
  pinMode(Botao2, INPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
}

void loop() {
  ValorBotao1 = digitalRead(Botao1);
  ValorBotao2 = digitalRead(Botao2);

  if (ValorBotao1 == HIGH){
    digitalWrite(Led1, HIGH);
    delay(tempo);
    digitalWrite(Led1, LOW);
    delay(tempo);

    digitalWrite(Led2, HIGH);
    delay(tempo);
    digitalWrite(Led2, LOW);
    delay(tempo);

    digitalWrite(Led3, HIGH);
    delay(tempo);
    digitalWrite(Led3, LOW);
    delay(tempo);

    digitalWrite(Led4, HIGH);
    delay(tempo);
    digitalWrite(Led4, LOW);
    delay(tempo);
  } else {
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
  }

/*=============================*/

  if (ValorBotao2 == HIGH){
    digitalWrite(Led4, HIGH);
    delay(tempo);
    digitalWrite(Led4, LOW);
    delay(tempo);

    digitalWrite(Led3, HIGH);
    delay(tempo);
    digitalWrite(Led3, LOW);
    delay(tempo);

    digitalWrite(Led2, HIGH);
    delay(tempo);
    digitalWrite(Led2, LOW);
    delay(tempo);

    digitalWrite(Led1, HIGH);
    delay(tempo);
    digitalWrite(Led1, LOW);
    delay(tempo);
  } else {
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
  }

}
