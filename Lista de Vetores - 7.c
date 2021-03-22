#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITE 100

int validaCodigo(int i, int *codigo);
int aumentaPreco10(float *preco, float *preco2, int qntd);
int aumentaPrecoX(float *preco, float *preco2, int qntd, float aumento);

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int i, qntd, escolha, flag=0;
	float aumento;
	int codigo[LIMITE];
	float preco[LIMITE], preco2[LIMITE];


	do{
		printf("Informe a quantidade de CDs que a deseja cadastrar: \n");
	    scanf("%d",&qntd);
	    if(qntd>LIMITE){
	        printf("Quantidade Invalida. Respeite o limite de 100 CDs. \n");
	    }
	}while(qntd>LIMITE);

	do{
		printf("Informe a codigo do %dº CD: \n", i+1);
		scanf("%d",&codigo[i]);
		if(i>0){
			flag = validaCodigo(i, codigo);
		}
		if(flag==0){
			printf("Informe o preço do %dº CD: \n", i+1);
			scanf("%f",&preco[i]);
			i++;
		}else{
			flag=0;
		}		
	}while(i<qntd && flag==0);
	
	system("cls");
	
	do{
		printf("Caso deseje aumentar o preço de todos os CDs em 10 %, por favor, pressione 1. \n");
		printf("Caso deseje aumentar o preço de todos os CDs em X %, por favor, pressione 2. \n");
		scanf("%d",&escolha);
	}while(escolha!=1 && escolha!=2);
	
	switch(escolha){
		case 1:
			aumentaPreco10(preco, preco2, qntd);
			for(i=0;i<qntd;i++){
				printf("CD: %d. \n", codigo[i]);
				printf("Preço anterior: %0.2f: \n", preco[i]);
				printf("Novo preço reajustado em 10%: %0.2f: \n", preco2[i]);
			}
			break;
		case 2:
			printf("Por favor informe a porcentagem de aumento desejada: \n");
			scanf("%f",&aumento);
			aumento=aumento/100;
			aumentaPrecoX(preco, preco2, qntd, aumento);
			for(i=0;i<qntd;i++){
				printf("CD: %d. \n", codigo[i]);
				printf("Preço anterior: %0.2f: \n", preco[i]);
				printf("Novo preço reajustado em 10%: %0.2f: \n", preco2[i]);
			}
			break;
	}
	

	



  return 0;
}

int validaCodigo(int i, int *codigo){
	int j, busca;
	busca=codigo[i];

	for(j=0;j<i;j++){
		if(codigo[j]==codigo[i]){
			printf("Código já existente! Verifique e digite novamente. \n");
			return 1;
		}else
			return 0;
		}
}

int aumentaPreco10(float *preco, float *preco2, int qntd){
	int i;
	
	for(i=0;i<qntd;i++){
		preco2[i]=preco[i]+(preco[i]*0.10);
	}
	return 0;
}

int aumentaPrecoX(float *preco, float *preco2, int qntd, float aumento){
	int i;
	
	for(i=0;i<qntd;i++){
		preco2[i]=preco[i]+preco[i]*aumento;
	}
	return 0;
}


