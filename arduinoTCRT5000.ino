const int PINO_SENSOR_TCRT5000 = 7; // número da entrada digital

void setup() {
  pinMode(PINO_SENSOR_TCRT5000, INPUT); // configura o pino como entrada (INPUT)
  Serial.begin(9600); // velocidade de leitura de bits por segundo
}

void loop() {
  int estadoSensor = digitalRead(PINO_SENSOR_TCRT5000); // leitura do valor que o sensor está devolvendo

  if (estadoSensor == LOW) {
    Serial.println("Objeto Detectado"); // se tem objeto mostra essa mensagem
  } else {
    Serial.println("Nenhum Objeto Detectado");  // se não tem objeto mostra essa mensagem
  }

  delay(1000); // cria um atraso de 1 segundo
}