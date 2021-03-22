#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITE 100

int validaMatricula(int i, int *matricula);
float maiorSalario(float *salario, int qntd);
float menorSalario(float *salario, int qntd);

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int qntd, i=0, busca, flag=0, maior, menor;
	int matricula[LIMITE];
	float salario[LIMITE];


	do{
		printf("Informe a quantidade de funcion�rios que a empresa possu�:.: \n");
	    scanf("%d",&qntd);
	    if(qntd>LIMITE){
	        printf("Quantidade Invalida. Respeite o limite de 100 funcion�rios. \n");
	    }
	}while(qntd>LIMITE);

	do{
		printf("Informe a matricula do %d� funcion�rio: \n", i+1);
		scanf("%d",&matricula[i]);
		if(i>0){
			flag = validaMatricula(i, matricula);
		}
		if(flag==0){
			printf("Informe o sal�rio do %d� funcion�rio: \n", i+1);
			scanf("%f",&salario[i]);
			i++;
		}else{
			flag=0;
		}		
	}while(i<qntd && flag==0);
	
	system("cls");
	
	for(i=0;i<qntd;i++){
		printf("Funcion�rio: %d. \n", matricula[i]);
		printf("Sal�rio: %0.2f. \n", salario[i]);
	}
	
	maior=maiorSalario(salario, qntd);
	printf("O maior sal�rio � o do funcion�rio %d, recebendo %0.2f \n", matricula[maior], salario[maior]);
	menor=menorSalario(salario, qntd);
	printf("O menor sal�rio � o do funcion�rio %d, recebendo %0.2f \n", matricula[menor], salario[menor]);


  return 0;
}

int validaMatricula(int i, int *matricula){
	int j, busca;
	busca=matricula[i];

	for(j=0;j<i;j++){
		if(matricula[j]==matricula[i]){
			printf("Matr�cula j� existente, verifique e digite novamente. \n");
			return 1;
		}else
			return 0;
		}
}

float maiorSalario(float *salario, int qntd){
	int j, i;
	float maior;
	
	for(j=0;j<qntd;j++){
		for(i=1;i<qntd;i++){	
			if(salario[i]>salario[j || salario[i]>maior]){
				maior=i;
			}
		}
	}
	return maior;
}

float menorSalario(float *salario, int qntd){
	int j, i;
	float menor;
	
	for(j=0;j<qntd;j++){
		for(i=1;i<qntd;i++){	
			if(salario[i]<salario[j] || salario[i]<menor){
				menor=i;
			}
		}
	}
	return menor;
}

