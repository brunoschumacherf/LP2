#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char nome[15];
  char sobrenome[20];
  char sexo[10];
  int idade;
  char email[20];
  long int telefone;
}Aluno;


int main(){
  Aluno *aluno, *ptr;
  int N, i;
  scanf("%d", &N);
  aluno = malloc( N * sizeof(Aluno));

  if (aluno == NULL){
    printf("Memoria insuficiente");
    return 0;
  }
  ptr = aluno;
  for(i = 0; i < N; i++, ptr++){
    printf("Digite o nome do Aluno\n");
    scanf("%s", ptr->nome);
    printf("Digite o sobrenome do Aluno\n");
    scanf("%s", ptr->sobrenome);
    printf("Digite o sexo do Aluno M/F\n");
    scanf("%s", ptr->sexo);
    printf("Digite o email do Aluno\n");
    scanf("%s", ptr->email);
    printf("Digite o telefone do Aluno\n");
    scanf("%li", &ptr->telefone);
  }
  ptr = aluno;
  for(i = 0; i < N; i++, ptr++){
    printf("%s %s\n",ptr->nome,ptr->sobrenome);
    printf("Sexo: %s\n", ptr->sexo);
    printf("email: %s\n", ptr->email);
    printf("telefone %li\n", ptr->telefone);
  }
  free(aluno);
  return 0;
}