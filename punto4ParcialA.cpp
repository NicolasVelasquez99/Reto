/* Autor: Alexander Velasquez - 201556089
 * Descripcion: Convierte el numero ingresado en un numero octal
 * Fecha de creacion: 5/04/2017
 * Fecha ultima modificacion: 5/04/2017
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;
int agregarProducto(string producto, int cantidad, map<string, int> &inventario){
	for(map<string, int>::iterator it=inventario.begin(); it != inventario.end(); ++it){
		if(it->first.compare(producto)==0){
			return inventario[it->first]+=cantidad;
	}
	}
	inventario[producto]=cantidad;
}

int venta(string producto, int cantidad, map<string, int> &inventario,	map<string, double> &historial){
	for(map<string, int>::iterator it=inventario.begin(); it != inventario.end(); ++it){
		if(it->first.compare(producto)==0 && it->second >cantidad){
			historial[producto]=cantidad;
			return inventario[it->first]-=cantidad;
	}
}
	cout<<"no se puede vender \n";
}
int main(){
	map<string, int> inventario;
	inventario["hoe"]=13;
	inventario["bitch"]=69;
	inventario["cookies"]=10;
	inventario["pizza"]=31416;
	inventario["hot dog"]=50;

	agregarProducto("slut",69,inventario);
	agregarProducto("hoe",56,inventario);
	agregarProducto("vodka",56,inventario);
	/*for(map<string, int>::iterator it=inventario.begin(); it != inventario.end(); ++it){
		cout << it->first <<" "<< it->second<< endl;
		}
		*/
	map<string, double> historial;
	historial["pizza"]=10;
	venta("hog", 25,inventario, historial);
	venta("vodka", 25,inventario, historial);

	for(map<string, double>::iterator it=historial.begin(); it != historial.end(); ++it){
		cout << it->first <<" "<< it->second<< endl;
		}

}
