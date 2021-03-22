#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITE 100


int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20];
	int i, j;
	
	printf("Por favor informe, letra e letra, o seu nome e finalize com # \n");
	
	while(nome[i-1]!= '#'){
		nome[i]=getchar();
		fflush(stdin);
		i++;
	}
	system("cls");
	
	printf("O nome informado foi: \n");
	
	for(j=0;j<i-1; j++){
		printf("%c", nome[j]);
	}

  return 0;
}



