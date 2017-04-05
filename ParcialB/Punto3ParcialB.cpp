/* Autor: Andres Mosquera Alvarado
 * Descripcion: Una funcion que recibe tres enteros y hace operaciones dependiendo condiciones
 * Fecha de creacion: 05 - 04 - 2017
 * Fecha ultima modificacion:
 */
 //3 Parcial B

#include <iostream>

using namespace std;

void funcion(int a, int b, int c){
	if(a > 0 && b > 0){
		cout << 2*c << endl;
	}
	else if(a < 0){
		
		if(b > 5 || b < -5){
			cout << 3*c << endl;
		}
		else if(a <= 5 && b > 5){
			cout << 5*c << endl;
		}
		else{
			cout << 4*c << endl;
		}
	}
	else if(b == 0 && a > 0){
		cout << 5*c << endl;
	}
	else{
		cout << c << endl;
	}
}

int main(){
	int x, y, z;
	
	cout << "Ingrese valor de x" << endl; 
	cin >> x;
	cout << "Ingrese valor de y" << endl;
	cin >> y;
	cout << "Ingrese valor de z" << endl;
	cin >> z;
	
	funcion(x, y, z);
	//cout << "El resultado es: " << funcion << endl;
}


	
	
