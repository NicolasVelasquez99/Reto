/* Autor: Alexander Velasquez - 201556089
 * Descripcion: Convierte el numero ingresado en un numero binario
 * Fecha de creacion: 24/02/2017
 * Fecha ultima modificacion: 24/02/2017
*/

#include <iostream>
using namespace std;
int binario(int numero){
    if(numero>1)      binario(numero/2);
    cout<<numero%2;
}
int main(){
	int numero=0;
	cout << "Ingrese un numero entero y positivo: ";
	cin >> numero;

	cout << "Numero ingresado: " << numero << endl;
	cout << "Numero binario: ";
	binario(numero);
	cout << endl;
}
