#ifndef EJ30-CLASEPRODUCTO_H
#define EJ30-CLASEPRODUCTO_H

#include <string>

using namespace std;

class Producto
{
public:
    Producto();
    Producto(string n, float p);
    float calcular(int);
    void estNombre(string);
    void estPrecio(float);
    string obtNombre();
    float obtPrecio();

protected:
    float precio;

private:
    string nombre;
};

#endif