#include <stdio.h>
#include <stdlib.h>
#define LIMITE 80


int main(void) {
int qntd, i=0, busca;
int vetor[LIMITE];


  do{
    printf("Informe a quantidade de n�meros a serem lidos at� 80.: \n");
    scanf("%d",&qntd);
      if(qntd>LIMITE){
        printf("Quantidade Invalida. Informe no m�ximo 30 letras. \n");
      }
  }while(qntd>LIMITE);

  do{
    printf("Por favor informe o %d� elemento a ser lido: \n", i+1);
    scanf("%d", &vetor[i]);
    i++;
  }while(i<qntd);
  
  printf("Informe o valor a ser buscado no vetor \n");
  scanf("%d",&busca);

  system("cls");

  for(i=0;i<=qntd;i++){
    if(vetor[i]==busca){
      printf("O valor %d foi encontrado na %d� posi��o do vetor", busca, i+1);
    }
  }
  
  

  return 0;
}


