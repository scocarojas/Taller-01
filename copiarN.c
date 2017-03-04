#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copiarN(char* origen, int n){
	
	int i=0;	
	char *destino;
	destino=(char *)malloc(strlen(origen)+1);

	for(i=0;i<n;i++){		
		destino[i]=origen[i];
	}
	printf("%s\n",destino);
}
void main(int argc, char *argv[]){
	
	char *cad1=argv[1];
	int n=atoi(argv[2]);
	copiarN(cad1,n);
}
	

