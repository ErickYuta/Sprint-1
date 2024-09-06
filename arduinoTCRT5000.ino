const int PINO_SENSOR_TCRT5000 = 7; // número da porta digital

void setup() { //sketch que inicializa após iniciar a aplicação, local onde armazena input, output e variáveis
  pinMode(PINO_SENSOR_TCRT5000, INPUT); // configura o pino como entrada (INPUT) || pinMode(PINO,MODE)
  Serial.begin(9600); // velocidade de leitura de bits por segundo
}

void loop() {
  int estadoSensor = digitalRead(PINO_SENSOR_TCRT5000); // leitura do valor digital retornando HIGH ou LOW  || digitalRead(pino)

  if (estadoSensor == LOW) { // 1 = True
    Serial.println("Objeto Detectado"); // se tem objeto mostra essa mensagem
  } else { // 0 = False
    Serial.println("Nenhum Objeto Detectado");  // se não tem objeto mostra essa mensagem
  }

  delay(1000); // cria um atraso de 1 segundo 1
}