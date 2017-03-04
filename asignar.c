#include <stdio.h>

#include <stdlib.h>

#include <string.h>



char* asignarCad(char* origen, char* car){

	
	
	int i=0;
	
	char *destino;

	
	destino=(char *)malloc(strlen(origen)+1);

	

	for(i=0;i<strlen(origen);i++){
		
		destino[i]=car[0];
	
	}
	
	printf("%s\n",destino);

}



void main(int argc, char *argv[]){


	char *cad1=argv[1];
	
	char *car=argv[2];
	
	asignarCad(cad1,car);

}
	"# Taller-01" 
