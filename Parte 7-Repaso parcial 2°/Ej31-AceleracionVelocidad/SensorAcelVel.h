#ifndef SENSORACELVEL_H
#define SENSORACELVEL_H

class AceleracionVelocidad{
    public:
	AceleracionVelocidad ();    // Constructor. Le da un valor inicial a aceleracionAdc y velocidadAdc
    void printAceleracionG (); // Imprime en pantalla la aceleración en g
    float getVelocidadMS ();   // Devuelve el valor de velocidad en m/s

    void setAceleracionAdc(uint16_t); //Establece el valor de aceleracion de 0 a 1023. Este valor podría provenir del ACD por ejemplo.
    void setVelocidadAdc(uint16_t);  //Establece el valor de velocidad de 0 a 4095. Este valor podría provenir del ACD por ejemplo.

private:
	uint16_t AceleracionAdc; //Variable que va de 0 a 1023 y proviene del sensor
	uint16_t VelocidadAdc;   //Variable que va de 0 a 4095 y proviene del sensor
    float AceleracionG;      //Variable convertida que va de 0 a 5 g 
    float VelocidaMS;     //Variable convertida que va de 0 a 1000 m/s
};

#endif