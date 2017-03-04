#include <stdio.h>

#include <stdlib.h>

#include <string.h>



int posFin(char *origen, char *car){

	
	
		
	int con=0;
	int n=strlen(origen);
	
	while(origen[n]!=car[0]){
		con++;
		n--;
	}
	return con-1;
}


int main(int argc, char *argv[]){


	char *cad1=argv[1];
	
	char *car=argv[2];
	int n=posFin(cad1,car);
	printf("%d",n);
}
