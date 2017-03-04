#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int copiaCadena(char *cad1,char *cad2){
	
	int i; 
	int n=strlen(cad1);
	int m=strlen(cad2);
	char *destino;
	destino=(char *)malloc(strlen(cad2));	
	
	for(i=0;i<m;i++){
		destino[i]=cad2[m-i];
		if(destino[i]==cad1[i]){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main(int argc, char *argv[]){
	
	char *cad1=argv[1];
	char *cad2=argv[2];
	int n=copiaCadena(cad1,cad2);
	printf("%d",n);
}
