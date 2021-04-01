#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITE 10


int adicionaDados(int qntdAtual);
int listaDados(int qntdAtual);

struct dadosVeiculo{
	char marca[12];
	char modelo[12];
	char cor[12];
	int portas;
	float motor;
};

	struct dadosVeiculo dados[LIMITE];
	
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	

	int escolha, qntdAtual=0;
	
	do{
		printf("\n\n Escolha a opção desejada: \n");
		printf("1-Adicionar modelo. \n");
		printf("2-Listar modelos adicionados. \n");
		printf("0- Sair \n");
		scanf("%d",&escolha);
		switch (escolha){
			case 1:
				system("cls");
				qntdAtual+=adicionaDados(qntdAtual);
				break;
			case 2:
				system("cls");
				listaDados(qntdAtual);
				break;
			default:
				break;	
		}
	}while(escolha!=0);
	
return 0;
}

int adicionaDados(int qntdAtual){
	int qntd, i;
	
	printf("Por favor, informe a quantidade de modelos que deseja adicionar a lista: \n");
	scanf("%d",&qntd); 
	
	if(qntdAtual+qntd<=10){
		for(i=qntdAtual;i<qntdAtual+qntd;i++){
			printf("%dº carro \n", i+1);
			fflush(stdin);
			printf("Marca: \n");
			gets(dados[i].marca);
			fflush(stdin);
			printf("Modelo: \n");
			gets(dados[i].modelo);
			fflush(stdin);
			printf("Cor: \n");
			gets(dados[i].modelo);
			fflush(stdin);
			printf("Quantidade de Portas: \n");
			scanf("%d",&dados[i].portas);
			printf("Potência do Motor: \n");
			scanf("%f",&dados[i].motor);
			system("cls");
		}
	}else{
		printf("A quantidade desejada ultrapassa a quantidade máxima de 10. \n");
		qntd=0;
	}

	
	
	return qntd;
}



int listaDados(int qntdAtual){
	int i;
	
	for(i=0;i<qntdAtual;i++){
		printf("\n\n\n Carro %d: \n", i+1);
		printf("Marca: %s - Modelo: %s - Cor: %s \n",dados[i].marca, dados[i].modelo, dados[i].cor);
		printf("Quantidade de portas: %d - Motorização: %0.2f \n\n\n",dados[i].portas, dados[i].motor);
	}
}


