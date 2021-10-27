#ifndef EJ30-CALSEPERECEDERO_H
#define EJ30-CLASEPERECEDERO_H

#include "Ej30-ClaseProducto.h"
#include <string>

using namespace std;

class Perecedero : public Producto
{
public:
    Perecedero();
    Perecedero(string n, float p);
    float calcular(int cantidad);
    void estDiasCaducar(int);
    int obtDiasCaducar();

private:
    int diasCaducar;
};

#endif