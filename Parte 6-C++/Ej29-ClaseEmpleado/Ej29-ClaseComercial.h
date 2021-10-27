#ifndef EJ29-CLASECOMERCIAL_H
#define EJ29-CLASECOMERCIAL_H

#include "Ej29-ClaseEmpleado.h"

class Comercial : public Empleado
{
public:
    Comercial(string n, int e, long s, double c);
    double obtComision();
    void estComision(double);

private:
    double comision;
};

#endif