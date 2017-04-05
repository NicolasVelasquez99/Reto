/* Autor: Alexander Velasquez - 201556089
 * Descripcion: Convierte el numero ingresado en un numero octal
 * Fecha de creacion: 5/04/2017
 * Fecha ultima modificacion: 5/04/2017
*/

#include <iostream>
using namespace std;
int octal(int numero){
    if(numero>7)      octal(numero/8);
    cout<<numero%8;
}
int main(){
	int numero=0;
	cout << "Ingrese un numero entero y positivo: ";
	cin >> numero;

	cout << "Numero ingresado: " << numero << endl;
	cout << "Numero octal: ";
	octal(numero);
	cout << endl;
}
