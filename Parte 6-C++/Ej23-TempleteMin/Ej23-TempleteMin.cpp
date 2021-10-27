#include <iostream>
using namespace std;

template <class T>
T minimo(T A, T B){
	if(A<B){
		return A;
	}else{
		return B;
	}
}

int main(){
	cout << "INT" << endl;
	cout << "El valor minimo es: " << minimo(int(1), int(2));
	cout << endl;
	
	cout << endl << "CHAR" << endl;
	cout << "El valor minimo es: " << minimo(char(100), char(19));
	cout << endl;
	
	cout << endl << "FLOAT" << endl;
	cout << "El valor minimo es: " << minimo(float(5.5), float(8.4));
	cout << endl;
	
	return 0;
}
