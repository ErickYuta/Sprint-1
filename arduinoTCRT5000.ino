const int PINO_SENSOR_TCRT5000 = 7; // número da entrada digital
  int ativado = 0; // variável global para a presença do carro
  int desativado = 0; // variável global para vaga vazia

void setup() { // inicia a configuração
  pinMode(PINO_SENSOR_TCRT5000, INPUT); // configura o pino como entrada (INPUT)
  Serial.begin(9600); // velocidade de leitura de bits por segundo
}

void loop() { // inica a contagem das variáveis
  int estadoSensor = digitalRead(PINO_SENSOR_TCRT5000); // leitura do valor que o sensor está devolvendo

  if (estadoSensor == LOW) {
    ativado++; // incrementa o valor quando tem carro
    Serial.println(ativado); // se tem objeto mostra essa mensagem
    desativado = 0; // zera o valor de desativado quando sair um carro
  } else {
    desativado--; // incrementa o valor quando não tem carro
    Serial.println(desativado);  // se não tem objeto mostra essa mensagem
    ativado = 0; // zera o valor do ativado
  }

  delay(1000); // cria um atraso de 1 segundo
}