#ifndef EJ28-CLASEPERSONA_H
#define EJ28-CLASEPERSONA_H

#include <string>
using namespace std;

//************************* Clases *********************
class Persona
{
public:
    Persona(string n, string a);
    string obtenerNombre();
    string obtenerApellido();
    void establecerNombre(string n);
    void establecerApellido(string a);

protected:
    string nombre;
    string apellido;
};

#endif