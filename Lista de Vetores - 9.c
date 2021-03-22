#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITE 100


int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int i, j, qntd, soma=0, maior, flag=0;
	int idade[LIMITE];


	do{
		printf("Informe a quantidade de idades que deseja cadastrar: \n");
	    scanf("%d",&qntd);
	    if(qntd>LIMITE){
	        printf("Quantidade Invalida. Respeite o limite de 100. \n");
	    }
	}while(qntd>LIMITE);

	do{
		printf("Informe a idade da %dª pessoa: \n", i+1);
		scanf("%d",&idade[i]);
		if(flag==0){
			maior=idade[i];
			flag=1;
		}else{
			if(idade[i]>maior){
				maior=idade[i];
			}
		}
		soma=soma+idade[i];
		i++;
	}while(i<qntd);
	
	system("cls");
	
	printf("A média das idades informadas é de %d \n", soma/qntd);
	
	printf("A maior idade encontrada foi: %d \n", maior);
	printf("A maior idade foi/foram encontrada(s) na(s) posição(es): \n");
	
	for(i=0;i<qntd;i++){
		if(idade[i]==maior){
			printf("%d \n", i+1);
		}
	}

  return 0;
}



