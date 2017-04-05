
/*
Descripción: Punto 3 parcial A
Autor: Nicolas Velasquez
FechaCreación: 05-04-2016
Fecha UltMOdificacion: 05-04-2016
*/

#include<iostream>

using namespace std;

void funcion(int a, int b){
	
	if(b>0 && a>0){
		cout << 'c' << endl;
	}
		else if(b<0){
			if(a>5 || b<-5){
				cout <<'d'<<endl;
			}
			else if(a<=5 && b>5){
					cout << 'f'<<endl;
				}
			else{
					cout<<'k'<< endl;
				}	
		}
			else if(b=0 && a>0){
				cout<< 'u' << endl;
			}
				else{
					cout << 'v'<< endl;
				}
}


int main(){
	
	funcion(5,-4);
		
	
}
