// Definição do pino do sensor
#define SENSOR_TEMP A0

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial com baudrate de 9600
  Serial.println("Monitoramento Serial Iniciado");
}

void loop() {
  int leituraAnalogica = analogRead(SENSOR_TEMP);
  float temperatura = (leituraAnalogica * 5.0 / 1023.0) * 100.0;
  
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  
  delay(1000); // Aguarda 1 segundo antes de próxima leitura
}