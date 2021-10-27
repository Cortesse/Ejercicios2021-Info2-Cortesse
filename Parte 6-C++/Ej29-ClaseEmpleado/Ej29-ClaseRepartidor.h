#ifndef EJ29-CLASEREPARTIDOR_H
#define EJ29-CLASEREPARTIDOR_H

#include "Ej29-ClaseEmpleado.h"

class Repartidor : public Empleado
{
public:
    Repartidor(string n, int e, long s, int z);
    int obtZona();
    void estZona(int);

private:
    int zona;
};

#endif