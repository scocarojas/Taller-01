#include<stdio.h>
#include<stdlib.h>

int longCadena(char *cad){
	
	int n=0;
	
	while(cad[n]!='\0')		
		n++;	
		return n;
}
int main(int argc, char *argv[]){
	
	char *cad1=argv[1];
	int n;
	n=longCadena(cad1);
	printf("%d",n);
}
