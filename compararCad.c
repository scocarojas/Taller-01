#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compararCad(char *cad1, char *cad2){

	int i;
	int n=strlen(cad1);
	int m=strlen(cad2);
	
	for(i=0;i<=n;i++){
		if(i<m||i<n){
			if(cad1[i]<cad2[i]){
				return -1;
			}
			if(cad1[i]>cad2[i]){
				return 1;
			}
		}
		else{
			return 0;
		}
	}
}
int main(int argc, char *argv[]){

	char *cad1=argv[1];
	char *cad2=argv[2];
	int n=compararCad(cad1,cad2);
	printf("%d",n);
}
