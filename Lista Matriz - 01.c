#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int i,j, busca,flag=0;
int matriz[5][5];


int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("Por favor, preencha a matriz: \n");
	printf("[Linha] - [Coluna] \n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("[%d-%d] \n",i+1,j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	system("cls");
	
	printf("Matriz digitada: \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("[%d]",matriz[i][j]);
		}
		printf(" \n ");
	}
	
	printf("Por favor insira o número que deseja buscar: \n");
	scanf("%d",&busca);
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(busca==matriz[i][j]){
				printf(" \n \n Número encontrado na posição [%d][%d] da matriz. \n");
				flag=1;
			}		
		}
	}
	
	if(flag==0)
		printf(" \n \n Número não encontrado na matriz. \n");
	
	
	
return 0;
}
