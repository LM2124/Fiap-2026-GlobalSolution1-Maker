#include <Servo.h>

Servo servoBraco;
Servo servoGarra;

const int ledPin = 7;

int anguloBraco = 90;   // posição inicial
int anguloGarra = 20;   // aberta

void setup() {
  Serial.begin(9600);

  servoBraco.attach(9);   // Servo do braço
  servoGarra.attach(10);  // Servo da garra

  pinMode(ledPin, OUTPUT);

  servoBraco.write(anguloBraco);
  servoGarra.write(anguloGarra);

  digitalWrite(ledPin, LOW);

  Serial.println("=== BRACO ROBOTICO ===");
  Serial.println("Comandos:");
  Serial.println("U - Subir");
  Serial.println("D - Descer");
  Serial.println("O - Abrir Garra");
  Serial.println("C - Fechar Garra");
}

void loop() {

  if (Serial.available() > 0) {

    char comando = toupper(Serial.read());

    switch (comando) {

      case 'U':
        anguloBraco += 15;
        if (anguloBraco > 180) anguloBraco = 180;

        servoBraco.write(anguloBraco);

        Serial.print("Braco subiu para ");
        Serial.print(anguloBraco);
        Serial.println(" graus");
        break;

      case 'D':
        anguloBraco -= 15;
        if (anguloBraco < 0) anguloBraco = 0;

        servoBraco.write(anguloBraco);

        Serial.print("Braco desceu para ");
        Serial.print(anguloBraco);
        Serial.println(" graus");
        break;

      case 'O':
        anguloGarra = 20;

        servoGarra.write(anguloGarra);
        digitalWrite(ledPin, LOW);

        Serial.println("Garra aberta");
        break;

      case 'C':
        anguloGarra = 120;

        servoGarra.write(anguloGarra);
        digitalWrite(ledPin, HIGH);

        Serial.println("Amostra capturada - Garra fechada");
        break;
    }
  }
}