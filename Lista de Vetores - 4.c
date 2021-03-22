#include <stdio.h>
#include <stdlib.h>


int main(void) {
int qntd, i=0;
char vetor[30];


  do{
    printf("Informe a quantidade de letras a serem lidas. Até 30.: \n");
    scanf("%d",&qntd);
      if(qntd>30){
        printf("Quantidade Invalida. Informe no máximo 30 letras.");
      }
  }while(qntd>30);

  printf("Por favor informe uma a uma as letras a serem lidas: \n");

  do{
    printf("->");
    scanf("%s", &vetor[i]);
    getchar();
    i++;
  }while(i<qntd);
  
  printf("As letras na ordem inversa a qual foram digitadas: \n");

 
  for(i=qntd; i>=0; i--){
    printf("%c", vetor[i]);
  }
  

  return 0;
}
