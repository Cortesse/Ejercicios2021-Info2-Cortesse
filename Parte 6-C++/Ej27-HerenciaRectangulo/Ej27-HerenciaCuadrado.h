#include "Ej27-HerenciaRectangulo.h"

#ifndef EJ27-HERENCIACUADRADO_H // directivas de preprocesador para evitar
#define EJ27-HERENCIACUADRADO_H // inclusiones múltiples del archivo de encabezado

class Cuadrado : public Rectangulo
{
public:
    Cuadrado(unsigned int posX, unsigned int posY, unsigned int largo);
};

#endif