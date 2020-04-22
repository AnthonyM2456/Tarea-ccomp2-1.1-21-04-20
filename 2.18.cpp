#include "iostream"

using namespace std;

int main(){
	
	int x,y;
	
	cout << "Escribe un numero: "; cin >> x;
	cout << "Escribe un numero: "; cin >> y;
	
	if(x==y){
		
		cout << "Estos numeros son iguales.\n"; // si x e y son iguales imprime 
		
	}
	else{
		
		if(x>y){
			
			cout << x << " es el mayor.\n"; //si x es mayor, imprime 
			
		}
		else{
			
			cout << y << " es el mayor.\n"; //si y es mayor, imprime
			
		}
		
	}	
	
	return 0;
} 
