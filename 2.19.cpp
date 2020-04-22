#include "iostream"

using namespace std;

int main(){
	
	float x, y, z, sum, prod, prom, mayor, menor;
	
	cout << "Escribe 3 numeros: "; cin >> x >> y >> z;
	
	sum = x+y+z;
	prom = (x+y+z)/3;
	prod = x*y*z;
	
	//comparacion de x, y, z, para saber quien es mayor y menor.
	
	if(x>y and y>z){
		mayor = x; menor = z;
	}
	if(x>z and z>y){
		mayor = x; menor = y;
	}
	if(y>z and z>x){
		mayor = y; menor = x;
	}
	if(y>x and x>z){
		mayor = y; menor = z;
	}
	if(z>y and y>x){
		mayor = z; menor = x;
	}
	if(z>x and x>y){
		mayor = z; menor = y;
	}
	
	
	
	cout << "La suma es: " << sum << endl;
	cout << "El promedio es: " << prom << endl;
	cout << "El producto es: " << prod << endl;
	cout << "La numero menor es: " << menor << endl;
	cout << "La numero mayor es: " << mayor << endl;

	return 0;
}
