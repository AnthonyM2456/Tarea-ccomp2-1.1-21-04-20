#include "iostream"

using namespace std;

int main(){
	
	float a,b, suma, resta, multiplicacion, division;
	
	cout << "ponga un numero:"; cin >> a; 
	
	cout << "ponga otro numero, puede ser el mismo:"; cin >> b;
	
	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	division = a/b;
	
	cout << "la suma es: " << suma;
	
	cout << "\nla resta es: " << resta;
	
	cout << "\nla multiplicacion es: " << multiplicacion;
	
	cout << "\nla division es: " << division;
	
	return 0;
	
}
