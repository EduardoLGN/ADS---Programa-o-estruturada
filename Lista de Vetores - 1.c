#include <stdio.h>
#include <stdlib.h>
#
int main(void) {
int contador;
float nota[9];

  do{
    printf("Por favor informe a nota do %dº aluno: \n", contador+1);
    scanf("%f",&nota[contador]);
    contador++;
  }while(contador<10);

  return 0;
}
