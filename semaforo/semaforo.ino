//1º Passo - Criar variáveis ou constantes para mapear pinos
#define verde1 13
#define amarelo1 12
#define vermelho1 11

#define verde2 8
#define amarelo2 7
#define vermelho2 4

//2º Passo - Definir configurações (Entradas e Saídas)
void setup() {
   pinMode(verde1, OUTPUT);
   pinMode(amarelo1, OUTPUT);
    pinMode(vermelho1, OUTPUT);
     pinMode(verde2, OUTPUT);
   pinMode(amarelo2, OUTPUT);
    pinMode(vermelho2, OUTPUT);

}

void loop() {
 digitalWrite(verde1, HIGH);
  digitalWrite(amarelo1, LOW);
  digitalWrite(vermelho1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(vermelho2, HIGH);
  delay(1000);
  
  digitalWrite(verde1, LOW);
  digitalWrite(amarelo1, HIGH);
  digitalWrite(vermelho1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo2, HIGH);
  digitalWrite(vermelho2, LOW);
  delay(500);
  
  digitalWrite(verde1, LOW);
  digitalWrite(amarelo1, LOW);
  digitalWrite(vermelho1, HIGH);
  digitalWrite(verde2, HIGH);
  digitalWrite(amarelo2, LOW);
  digitalWrite(vermelho2, LOW);
  delay(1000);

}
