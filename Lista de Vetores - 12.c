#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITE 50

int validaMatricula(int i, int *matricula);


int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int i=0, flag=0, flag2=0, j, k, menor1=9999, menor2=9999, menor3=9999, aux,aux2, aux3;
	int matricula[LIMITE], meses[LIMITE];




	do{
		printf("Informe a matricula do %d� funcion�rio: \n", i+1);
		printf("0 - encerrar procedimento \n ");
		scanf("%d",&matricula[i]);
		if(i>0){
			flag = validaMatricula(i, matricula);
		}
		if(flag==0  && matricula[i]>0){
			printf("Informe a quantos meses o %d� funcion�rio est� contratado: \n", i+1);
			scanf("%d",&meses[i]);
		}

		if(i>0){
			flag2= validaMatricula(i, meses);
		}
		if(flag==0 && flag2==0){ 
			i++;	
		}
	}while(matricula[i-1]>0);
	
	for(j=0;j<i;j++){
		if(meses[j]<menor1){
			menor1=meses[j];
			aux=j;
		}else{
			if(meses[j]<menor2){
				menor2=meses[j];
				aux2=j;
			}else{
				if(meses[j]<menor3){
					menor3=meses[j];
					aux3=j;
				}
			}
		}
	}
		
	
	printf("Os tr�s empregados mais recentes s�o: \n");
	printf("Funicon�rio %d. Tempo de empresa: %d \n", matricula[aux], meses[aux]);
	printf("Funicon�rio %d. Tempo de empresa: %d \n", matricula[aux2], meses[aux2]);
	printf("Funicon�rio %d. Tempo de empresa: %d \n", matricula[aux3], meses[aux3]);

  return 0;
}

int validaMatricula(int i, int *matricula){
	int j, busca;
	busca=matricula[i];

	for(j=0;j<i;j++){
		if(matricula[j]==matricula[i]){
			printf("Valor j� existente, verifique e digite novamente. \n");
			return 1;
		}else
			return 0;
		}
}


