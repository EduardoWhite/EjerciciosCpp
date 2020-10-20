/*
 Numero de problema: 21.
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
	int n1 = 4;
	int n2 = -4;
	int suma = 0;
	
	suma = (n1 + n2);
	
	cout<<"La suma de "<<n1<<" y "<<n2<<" es: "<<suma<<endl;
	if(suma < 0){
		cout<<"La suma fue positiva"<<endl;
	}
 	else if(suma > 1){
 		cout<<"La suma fue negativa"<<endl;
	}
	else if(suma == 0){
		cout<<"La suma fue cero"<<endl;
	}	
	return 0;
}
