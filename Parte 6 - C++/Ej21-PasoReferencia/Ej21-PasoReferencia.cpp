#include <iostream>
using namespace std;

    void tripleLlamadaPorValor(double A){
    	A=A*3;                                  
	}	
	
	void triplePorReferencia(double &B){
		B=B*3;
	}
							  
int main(){
	double cuenta=5.5;
	tripleLlamadaPorValor(cuenta);
	cout << "PASO POR VALOR"<< endl;
	cout << "El resultado es: " << cuenta;
	cout << endl;
	
	triplePorReferencia(cuenta);
	cout << endl << "PASO POR REFERENCIA"<< endl;
	cout << "El resultado es: " << cuenta;
	cout << endl;
	
	return 0;
}
