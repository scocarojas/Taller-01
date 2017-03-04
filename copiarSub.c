#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copiarSub(char *origen,int n, int m){

	int i=0;
	char *destino;

	destino=(char *)malloc(m-n+1);

	for(i=n;i<=m;i++){
		destino[i]=origen[i];
	}
	printf("%s\n",destino);
}

void main(int argc, char *argv[]){
	char *cad1=argv[1];
	
	int n=atoi(argv[2]);

	int m=atoi(argv[3]);
	copiarSub(cad1,n,m);
}
	
	
	
