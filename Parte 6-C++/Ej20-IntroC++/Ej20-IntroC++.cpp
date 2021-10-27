#include <iostream>

using namespace std;

char nombre[20];
char direccion[20];
char ciudad[20];
char estado[20];
int cod_postal;

int main(){
	cout << "INGRESE SUS DATOS" << endl;
	cout << "------------------" << endl;
	cout << "Nombre: ";
	cin.getline(nombre, 20);
	cout << endl;
	
	cout << "Direccion: ";
	cin.getline(direccion, 20);
	cout << endl;
	
	cout << "Ciudad: ";
	cin.getline(ciudad, 20);
	cout << endl;
	
	cout << "Estado civil: ";
	cin >> estado;
	cout << endl;
	
	cout << "Codigo postal: ";
	cin >> cod_postal;
	cout << endl;
	
	return 0;
}
