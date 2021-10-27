//************************* Inclusiones *********************
#include "Ej28-ClasePersona.h"
#include <string>
using namespace std;

//*************************** Métodos *********************
Persona::Persona(string n, string a)
{
    nombre = n;
    apellido = a;
}

void Persona::establecerNombre(string n)
{
    nombre = n;
}

void Persona::establecerApellido(string a)
{
    apellido = a;
}

string Persona::obtenerNombre()
{
    return nombre;
}

string Persona::obtenerApellido()
{
    return apellido;
}