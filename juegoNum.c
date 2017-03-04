#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	int jugador1,jugador2,intentos,numM,indice,j;
	int historial [50];
	srand (time(NULL));
	intentos=1;
	numM=rand()%101;
	printf ("Adivina el número\n");
	scanf("Ingrese el primer número: %d",&jugador1);
	scanf("Ingrese el segundo número: %d",&jugador2);
	indice=0;
	historial[indice]=jugador1;
	historial[indice+1]=jugador2;
	

	while(jugador1!=numM||jugador2!=numM){
		if(jugador1>numM){
			printf("Es menor que el primer número\n");
			scanf("%d", &jugador1);
		}
		if(jugador2>numM){
			printf("Es menor que el segundo número\n");
			scanf("%d", &jugador2);
		}
		if (jugador1<numM){
			printf("Es mayor que el primer número\n");
			scanf("%d", &jugador1);
		}
		if (jugador2<numM){
			printf("Es mayor que el segundo número\n");
			scanf("%d", &jugador2);
		}
		if ((jugador2<numM && jugador1>numM)||(jugador2>numM && jugador1<numM)){
			printf("El número está entre los dos ingresados\n");
			scanf("%d", &jugador1);	
			scanf("%d", &jugador2);
		}		
		intentos++;
		indice++;
		historial[indice]=jugador1;	
	 	historial[indice+1]=jugador2;
	}
	if(jugador1==numM||jugador2==numM){
		printf("\n Adivinaste");
		printf("\n Lo lograste en %d intentos",intentos);
	}
	if((jugador1+jugador2)==numM){
		printf("\n Que suerte, ganaste por adivinar la suma");
	}
	if((jugador1-jugador2)==numM){
		printf("\n Que suerte, ganaste por adivinar la resta");
	}
	if((jugador1*jugador2)==numM){
		printf("\n Que suerte, ganaste por adivinar la multiplicación");
	}
	for(j=0;j<=intentos;j++){
		printf("\n %d",historial[j]);
	}
} 	
