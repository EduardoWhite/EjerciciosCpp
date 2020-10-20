/*
 Numero de problema: 24.
 Github: https://github.com/EduardoWhite
 Creador: Blanco Melendez Manuel Eduardo
 Fecha creacion: 18 de Octubre del 2020
 Descripcion breve: Determinar el jugador de futbol mas popular
 con respecto a unos votos realizados
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int array[3];
	int num = 0;
	for(int i = 0; i < 3; i++){
		cout<<"Ingrese numero "<<(i + 1)<<endl;
		cin>>num;
		array[i] = num;
	}
	cout<<"Numero a la potencia n  "<<"Numero a la potencia n2"<<endl;
	
	for(int i = 0; i < 3; i++){
		
		cout<<"             "<<array[i]<<"                "<<array[i]*array[i]<<endl;
	}
	
	return 0;
}
