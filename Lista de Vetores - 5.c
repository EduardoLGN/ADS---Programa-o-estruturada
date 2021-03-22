#include <stdio.h>
#include <stdlib.h>
#define LIMITE 80


int main(void) {
int qntd, i=0, busca;
int vetor[LIMITE];


  do{
    printf("Informe a quantidade de números a serem lidos até 80.: \n");
    scanf("%d",&qntd);
      if(qntd>LIMITE){
        printf("Quantidade Invalida. Informe no máximo 30 letras. \n");
      }
  }while(qntd>LIMITE);

  do{
    printf("Por favor informe o %dº elemento a ser lido: \n", i+1);
    scanf("%d", &vetor[i]);
    i++;
  }while(i<qntd);
  
  printf("Informe o valor a ser buscado no vetor \n");
  scanf("%d",&busca);

  system("cls");

  for(i=0;i<=qntd;i++){
    if(vetor[i]==busca){
      printf("O valor %d foi encontrado na %dª posição do vetor", busca, i+1);
    }
  }
  
  

  return 0;
}


