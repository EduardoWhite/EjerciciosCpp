/*
 NÃºmero de problema: 36.
 Github: https://github.com/EduardoWhite
 Creador: Blanco Melendez Manuel Eduardo
 Fecha creaciÃ³n: 18 de Octubre del 2020
 DescripciÃ³n breve: Determinar el jugador de futbol mas popular
 con respecto a unos votos realizados
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

