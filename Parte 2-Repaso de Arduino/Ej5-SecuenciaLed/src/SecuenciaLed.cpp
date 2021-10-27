//Opcion basica
#include <Arduino.h>
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}
int sentido = 0;
void loop()
{
  if (digitalRead(5) == LOW) //Se usa LOW por que se declaro un INPUT_PULLUP
  {
    sentido = 0; //Sentido ASCENDENTE
  }
  else if (digitalRead(6) == LOW)
  {
    sentido = 1; //Sentido DESCENDENTE
  }
  if (sentido == 0)
  {
    digitalWrite(2,HIGH);
    delay(500);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
  }	
  else
  {
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    delay(500);
    digitalWrite(2,LOW);
  }
}