#include "SensorAcelVel.h"
#include "CampoMagnetico.h"
#include <iostream>

using namespace std;

int main(){
    AceleracionVelocidad sensor1;

    sensor1.printAceleracionG();

    float velocidad = sensor1.getVelocidadMS();
    cout << "La velocidad es de " << velocidad << " m/s." << endl;

    Magnetico sensor2; // Crea el objeto

    sensor2.printAceleracionG(); // Imprime aceleracion cargada por el constuctor

    velocidad = sensor2.getVelocidadMS(); // Consulta la velocidad en m/s
    cout << "La velocidad es de " << velocidad << " m/s." << endl;

    sensor2.establecerCampoAdc(200);
    sensor2.imprimirCampo();

    return 0;
}