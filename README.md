## Antes de iniciar con las corridas de mis programas de cpp en qemu voy a anexar mi conclusion.
En un principio se me dificulto un poco el emular qemu debido que mi computadora tenia un disco de 130 y ya lo tenia saturado asi que compre un disco de mas capacidad esta semana y pude compilar qemu, en un principio se me hizo dificil ya que no sabia por donde empezar pero una vez entras a la terminar y sepas que comandos usar todo se vuelve muy sencillo y mas por que mis programas de cpp ya los tenia hechos desde hace un par de semanas entocnes lo unico que debia hacer era emular mi qemu y compilar desde la terminar.
Los comandos que utilice fueron los siguientes:
* git clone https://github.com/EduardoWhite/EjerciciosCpp -- CLONAR RESPOSITORIO
* sud apt-get install gcc -- INSTALAR PAQUETE PARA COMPILAR CPP EN QEMU
* g++ <nombre_archivo> -- CREAR ARCHIVO COMPILADO DEL PROGRAMA CPP
* ./a.out -- COMPILAR ARCHIVO

### CORRIDA EN QEMU DE MIS PROGRAMAS DE CPP

<a href="https://cooltext.com"><img src="https://images.cooltext.com/5478970.png" width="446" height="108" alt="Programa 1" /></a>
<br /><a href="http://cooltext.com" target="_top"><img src="https://cooltext.com/images/ct_pixel.gif" width="80" height="15" alt="Cool Text: Logo and Graphics Generator" border="0" /></a><br/>
/*
 Numero de problema: 36.<br/>
 Github: https://github.com/EduardoWhite<br/>
 Creador: Blanco Melendez Manuel Eduardo<br/>
 Fecha creacion: 18 de Octubre del 2020<br/>
 Descripcion breve: Determinar el jugador de futbol mas popular<br/>
 con respecto a unos votos realizados<br/>
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    /* JUGADORES */
    string jugador[4] = {"J. Sanchez, 'halfback'", "S. Bermudez, 'tackle'", "P. Solis, 'quearterback'", "B. Hernandez, 'extremo'"};
    /* ALMACENA LA SUMA DE LOS VOTOS POR JUGADOR */
    int suma[4];
    /* VOTOS EFECTUADOS */
    int votos[52] = {4,1,1,2,4,
					 1,2,3,4,4,
					 4,1,3,3,2,
					 4,1,2,1,4,
					 3,3,4,1,2,
					 4,3,2,4,4,
					 3,1,2,4,4,
					 3,1,1,3,4,
					 4,4,2,1,2,
					 4,2,4,2,1,
					 3,4};
					 
    for(int i = 0; i < 52; i++){
    		switch(votos[i]){
    			case 1:{
    				suma[0] += 1;
					break;
				}
				
				case 2:{
    				suma[1] += 1;
					break;
				}
				
				case 3:{
    				suma[2] += 1;
					break;
				}
				
				case 4:{
    				suma[3] += 1;
					break;
				}					
			}
	}
	
	if((suma[0] > suma[1]) && (suma[0] > suma[2]) && (suma[0] > suma[3])){
		cout<<"Ganador: " + jugador[0];
	}
	else if((suma[1] > suma[0]) && (suma[1] > suma[2]) && (suma[1] > suma[3])){
		cout<<"Ganador: " + jugador[1];
	}
	else if((suma[2] > suma[1]) && (suma[2] > suma[0]) && (suma[2] > suma[3])){
		cout<<"Ganador: " + jugador[2];
	}
	else if((suma[3] > suma[1]) && (suma[3] > suma[0]) && (suma[3] > suma[0])){
		cout<<"Ganador: " + jugador[3];
	}
    return 0;
}

## Configuracion de Qemu
Configuracion y clonacion de mis archivos de git en qemu para poder utilizar la terminal y pueda correr los programas
<img src="https://raw.githubusercontent.com/EduardoWhite/EjerciciosCpp/master/c1.PNG"/>
## Corrida en Qemu
<img src="https://raw.githubusercontent.com/EduardoWhite/EjerciciosCpp/master/c2.PNG"/>
### Programa 2<br/>
/*
 Numero de problema: 21.<br/>
 Github: https://github.com/EduardoWhite<br/>
 Creador: Blanco Melendez Manuel Eduardo<br/>
 Fecha creacion: 18 de Octubre del 2020<br/>
 Descripcion breve: Deterinar si la suma de dos numeros es positivo, negativo o cero<br/>
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

## Corrida en Qemu
<img src="https://raw.githubusercontent.com/EduardoWhite/EjerciciosCpp/master/c3.PNG"/>
### Programa 3
/*
 Numero de problema: 21.<br/>
 Github: https://github.com/EduardoWhite<br/>
 Creador: Blanco Melendez Manuel Eduardo<br/>
 Fecha creacion: 18 de Octubre del 2020<br/>
 Descripcion breve: Calcular la suma de la multiplicacion de todos los numeros pares ingresados<br/>
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

## Corrida en Qemu
<img src="https://raw.githubusercontent.com/EduardoWhite/EjerciciosCpp/master/c4.PNG"/>
### Programa 4
/*
 Numero de problema: 21.<br/>
 Github: https://github.com/EduardoWhite<br/>
 Creador: Blanco Melendez Manuel Eduardo<br/>
 Fecha creacion: 18 de Octubre del 2020<br/>
 Descripcion breve: Calcular la potencia cuadrada de los numeros ingresados<br/>
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

## Corrida en Qemu
<img src="https://raw.githubusercontent.com/EduardoWhite/EjerciciosCpp/master/c5.PNG"/>
### Programa 5
/*
 Numero de problema: 21.<br/>
 Github: https://github.com/EduardoWhite<br/>
 Creador: Blanco Melendez Manuel Eduardo<br/>
 Fecha creacion: 18 de Octubre del 2020<br/>
 Descripcion breve: Calcular la cantidad de pesos ingresados en dolar<br/>
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

## Corrida en Qemu
<img src="https://raw.githubusercontent.com/EduardoWhite/EjerciciosCpp/master/c6.PNG"/>
