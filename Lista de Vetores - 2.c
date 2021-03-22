#include <stdio.h>
#include <stdlib.h>
#
int main(void) {
int contador, alunos;
float nota[49];

  while(alunos>50){
    printf("Por favor informe o número de alunos: \n");
    scanf("%d",&alunos);
      if(alunos>50){
        printf("Quantidade Invalida. O número não pode ultrapassar 50 alunos.");
      }
  }

  do{
    printf("Por favor informe a nota do %dº aluno: \n", contador+1);
    scanf("%f",&nota[contador]);
    contador++;
  }while(contador<alunos);

  return 0;
}
