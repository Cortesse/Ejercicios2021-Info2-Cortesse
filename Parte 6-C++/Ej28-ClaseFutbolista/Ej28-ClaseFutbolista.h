#ifndef EJ28-CLASEFUTBOLISTA_H
#define EJ28-CLASEFUTBOLISTA_H

#include "Ej28-ClasePersona.h"

//************************* Clases *********************
class Futbolista : public Persona
{
public:
    Futbolista(string n, string a, int c);
    void establecerNumero(int c);
    int obtenerNumero();

private:
    int numero;
};
#endif