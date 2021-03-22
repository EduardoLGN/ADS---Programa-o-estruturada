#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITE 30

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int qntd, i, j;
	char caractere[LIMITE];
	char coringa;

	do{
		printf("Informe a quantidade de caracteres que a deseja cadastrar: \n");
	    scanf("%d",&qntd);
	    if(qntd>LIMITE){
	        printf("Quantidade Invalida. Respeite o limite de 30 caracteres. \n");
	    }
	}while(qntd>LIMITE);
	
	do{
		fflush(stdin);
		printf("Informe o %d caractere: \n", i+1);
		scanf("%c",&caractere[i]);
		fflush(stdin);
		i++;
	}while(i<qntd);
	
	for(i=0;i<qntd;i++){
		for(j=1;j<qntd;j++){
			if(caractere[i]>caractere[j]){
				coringa=caractere[i];
				caractere[i]=caractere[j];
				caractere[j]=coringa;		
			}
		}
	}
	
	for(i=0;i<qntd;i++){
		printf("[%c]", caractere[i]);
	}

}
