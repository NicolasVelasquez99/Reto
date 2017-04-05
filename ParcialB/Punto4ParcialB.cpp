/* Autor: Andres Mosquera Alvarado
 * Descripcion: Una funcion que recibe tres enteros y hace operaciones dependiendo condiciones
 * Fecha de creacion: 05 - 04 - 2017
 * Fecha ultima modificacion:
 */
 // 4 parcial B
 
 #include <iostream>
 #include <map>
 
 using namespace std;
 
 //map<int, double> registroEmpleados;
 //map<string, double> historialDeVentas;
 
 //b.)
 
 int agregarEmpleado(int cedula, map<int, double> &registroEmpleados){
	 for(map<int, double>::iterator it=registroEmpleados.begin(); it!= registroEmpleados.end(); ++it){
		 if (cedula == it->first){
			 cout << "ERROR, el empleado ya existe" << endl;
		 }
		 else{
			return registroEmpleados[cedula] = 0;
		 }
	 }
	 return 0;
 }
 
 //c.)
 
int vender (string codigoP, int cedulaE, double totalVenta, map<int, double> &registroEmpleados, map<string, double> &historialDeVentas){
	for (map<int, double>::iterator it=registroEmpleados.begin(); it!= registroEmpleados.end(); ++it){
		if (cedulaE == it->first){
			cout << "El empleado existe" << endl;
		}
		else {
			 registroEmpleados[cedulaE] = totalVenta;
		}
	}
		for(map<string, double>:: iterator it=historialDeVentas.begin(); it!= historialDeVentas.end(); ++it){
			if(it->first.compare(codigoP)==0){
				 historialDeVentas[codigoP]+= totalVenta;
			}
			else {
				// historialDeVentas[codigoP] = totalVenta;
		}
	}
}

int main(){
	map<int, double> registroEmpleados;
	map<string, double> historialDeVentas;
	
	//Este codigo comentado sirve para probar la primer funcion la cual es agregar empleado
	/*
	int cedula = 1116;
	
	registroEmpleados[123]=45;
	registroEmpleados[234]=65;
	
	agregarEmpleado(cedula, registroEmpleados);

	for(map<int, double>::iterator it=registroEmpleados.begin(); it!= registroEmpleados.end(); ++it){
		cout << it->first << " --> " << it->second << endl;
	}
*/
	//Este codigo sirve para probar la segunda funcion la cual es vender
	
	string codigoP = "bcd";
	string codigo = "adb";
	int cedulaE = 1116;
	int cedula = 123;
	double totalVenta = 44;
	
	
	registroEmpleados[223]=45;
	registroEmpleados[234]=65;
	
	historialDeVentas["bcd"]=45;
	historialDeVentas["dfg"]=47;
	
	vender(codigo, cedulaE, totalVenta, registroEmpleados, historialDeVentas);
	vender(codigoP, cedula, totalVenta, registroEmpleados, historialDeVentas);
	

	
	for(map<int, double>::iterator it=registroEmpleados.begin(); it!= registroEmpleados.end(); ++it){
		cout << it->first << " --> " << it->second << endl;
	}
	for(map<string, double>:: iterator it=historialDeVentas.begin(); it!= historialDeVentas.end(); ++it){
		cout << it->first << " --> " << it->second << endl;
	}
}


 
