#include <stdio.h>

#include <stdlib.h>

#include <string.h>

char* mayusculas(char *origen){

	
	
		
	int i;
	int n=strlen(origen);
	
	for(i=0;i<n;i++){
		if(97>=origen[i]<=122){
			origen[i]=origen[i]-32;
		}
	}
	printf("%s",origen);	
}


char* main(int argc, char *argv[]){


	char *cad1=argv[1];
	
	mayusculas(cad1);
}
