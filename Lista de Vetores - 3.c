#include <stdio.h>
#include <stdlib.h>

int main(void) {
int contador, qntd, soma;
int vetor[99];

  while(qntd>100){
    printf("Por favor informe o número de elementos a serem somados: \n");
    scanf("%d",&qntd);
      if(qntd>100){
        printf("Quantidade Invalida. A soma não pode ultrapassar 100 elementos.");
      }
  }
  soma=0;
  do{
    printf("Por favor informe o %dº número a ser somado: \n", contador+1);
    scanf("%d",&vetor[contador]);
    soma=soma+vetor[contador];
    contador++;
  }while(contador<qntd);



  printf("O valor total de todos os elementos somados foi de %d. \n",soma);
  return 0;
}
