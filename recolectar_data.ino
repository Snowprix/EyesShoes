// Definir los pines para el sensor ultrasónico y el buzzer
const int Trigger = 2;
const int Echo = 3;
const int Buzzer = 4;

void setup() {
  // Inicializar la comunicación serial y los pines
  Serial.begin(9600); // Inicia la comunicación para enviar datos
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(Buzzer, OUTPUT);
  digitalWrite(Trigger, LOW);
}

void loop() {
  long t; // Tiempo del pulso
  long d; // Distancia en centímetros

  // Enviar un pulso al Trigger
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);  
  digitalWrite(Trigger, LOW);

  // Leer el tiempo de retorno del pulso
  t = pulseIn(Echo, HIGH);
  
  // Calcular la distancia
  d = t / 59; // Convertir el tiempo a distancia en cm

  // --- CAMBIO CLAVE AQUÍ ---
  // Enviar ÚNICAMENTE el valor de la distancia por el puerto serie.
  // Esto facilita enormemente la lectura desde Python.
  Serial.println(d);

  // --- Tu lógica del buzzer puede permanecer igual ---
  int buzzerFreq = map(d, 5, 100, 2000, 500);

  if (d >= 100) {
    noTone(Buzzer);
  } else if (d <= 5) {
    tone(Buzzer, 2000);
  } else {
    tone(Buzzer, buzzerFreq);
  }

  // Pausa para la siguiente lectura
  delay(100);
}