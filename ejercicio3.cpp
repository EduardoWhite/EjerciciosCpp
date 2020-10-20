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
	int num = 0;
	int ope = 0;
	int array[3];
	int res = 1;
	for(int i = 0; i < 3; i++){
		cout<<"Ingrese numero "<<(i + 1)<<endl;
		cin>>num;
		array[i] = num;
	}
	for(int i = 0; i < 3; i++){
		ope = array[i] % 2;
		if(ope == 0){
			res *= array[i];
		}
	}
	cout<<"La multiplicación de los numeros pares es: "<<res;
	return 0;
}
