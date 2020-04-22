#include "iostream"

using namespace std;

int main(){
	
	int x, y, z;
	
	cout << "Ponga la longitud de la cara del cubo: "; cin >> x; 
	
	y = 6 * (x * x); //area de superficie de un cubo = 6*(x^2)
	
	z = x * x * x; //volumen de un cubo = x^3
	
	//"\t" crea el espacio de un tabulacion
	
	cout << "Face length\tSurface area\tVolume\n" << "of cube (cm)\tof cube (cm^2)\tof cube (cm^3)\n" << x << "\t\t" << y << "\t\t"  << z;
	
	return 0;

}
