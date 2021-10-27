#include "SensorAcelVel.h"

#ifndef CAMPOMAGNETICO_H // directivas de preprocesador para evitar
#define CAMPOMAGNETICO_H // inclusiones múltiples del archivo de encabezado

//************************* Clases *********************
class Magnetico : public AceleracionVelocidad
{
public:
    void imprimirCampo();                    // Imprime en pantalla el campo magnético en uT
    void establecerCampoAdc(uint16_t valor); // Establece el valor de campo magnetico de 0 a 511. Este valor podría provenir del ACD por ejemplo.

private:
    uint16_t campoAdc; // Variable que va de 0 a 511 y proviene del sensor
    uint16_t campoUT;  // Variable convertida que va de 0 a 4800 uT
};

#endif