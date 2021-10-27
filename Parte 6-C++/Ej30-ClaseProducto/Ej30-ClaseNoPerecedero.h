#ifndef EJ30-CLASENOPERECEDERO_H
#define EJ30-CLASENOPERECEDERO_H

#include <string>
#include "Ej30-ClaseProducto.h"

using namespace std;

class NoPerecedero : public Producto
{
public:
    NoPerecedero();
    NoPerecedero(string n, float p);
    void estTipo(int);
    int obtTipo();

private:
    int tipo;
};

#endif