#include <iostream>
using namespace std;

void min(int A=3, int B=5){
	if(A<B){
		cout << "El valor minimo es: " << A;
		cout << endl;
	}else{
		cout << "El valor minimo es: " << B;
		cout << endl;
	}
}

void min(float A=3.0, float B=5.0){
	if(A<B){
		cout << "El valor minimo es: " << A;
		cout << endl;
	}else{
		cout << "El valor minimo es: " << B;
		cout << endl;
	}
}

int main(){
	
	float a=3.5;
	float b=4.2;
	min(1,2);
	min(a,b);
	
	return 0;	
}
