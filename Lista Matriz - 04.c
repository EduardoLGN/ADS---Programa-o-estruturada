#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
int i,j;
float matriz[3][6];
float soma1=0,soma2=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
				matriz[i][j]=rand()%100;
		}
	}
	

	printf("Matriz original: \n");
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			printf("[%0.1f]",matriz[i][j]);
		}
		printf(" \n ");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			if(j==j%2==0){
				soma1=soma1+matriz[i][j];
			}	
			if(j==1 || j==3){
				soma2=soma2+matriz[i][j];
			}
		}
	}
	
	printf("\n \n A soma dos elementos nas colunas impares é de: %f \n\n", soma1);
	printf("\n \n A média dos elementos da segunda e quarta coluna é: %f \n\n",soma2/6);
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			if(j==5){
				matriz[i][j]=matriz[i][0]+matriz[i][1];
			}
		}
	}
	
	
	printf("Matriz modificada com a soma dos números da coluna 1 e 2 na coluna 6: \n");
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			printf("[%0.1f]",matriz[i][j]);
		}
		printf(" \n ");
	}
	
	

	
return 0;
}

