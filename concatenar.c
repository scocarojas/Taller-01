#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenar(char *cad1,char *cad2){

	int i=0;
	int j=0;
	char *destino;

	destino=(char *)malloc(strlen(cad1)+strlen(cad2)+1);

	for(i=0;i<(strlen(cad1));i++){
		destino[i]=cad1[i];
	}
		
	for(j=0;j<(strlen(cad2));j++){
		destino[i]=cad2[j];
		i++;
	}
	printf("%s\n",destino);
}

void main(int argc, char *argv[]){
	char *cad1=argv[1];
	char *cad2=argv[2];
	concatenar(cad1,cad2);
}

