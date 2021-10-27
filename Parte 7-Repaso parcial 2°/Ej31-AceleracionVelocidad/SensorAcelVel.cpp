#include "SensorAcelVel.h"
#include <iostream>

using namespace std;

AceleracionVelocidad::AceleracionVelocidad(){
    this->setAceleracionAdc(512);
    this->setVelocidadAdc(2048);
}

void AceleracionVelocidad::printAceleracionG(){
    AceleracionG = AceleracionAdc * 5.0 / 1023.0;
    cout << "La aceleracion es de " << AceleracionG << " g." << endl;
}

float AceleracionVelocidad::getVelocidadMS(void){
    VelocidaMS = VelocidadAdc * 1000.0 / 4095.0;
    return VelocidaMS;
}

void AceleracionVelocidad::setAceleracionAdc(uint16_t valor){
    if ((valor >= 0) && (valor <= 1023)){ // Para asegurarse de que el valor sea válido{
        AceleracionAdc = valor;
    }
    else{
        cout << "Valor de aceleracion no valido" << endl;
    }
}   
// Establece el valor de velocidad de 0 a 4095. Este valor podría provenir del ACD por ejemplo.
void AceleracionVelocidad::setVelocidadAdc(uint16_t valor){
    if ((valor >= 0) && (valor <= 4095)){ // Para asegurarse de que el valor sea válido{
        VelocidadAdc = valor;
    }
    else{
        cout << "Valor de velocidad no valido" << endl;
    }
}