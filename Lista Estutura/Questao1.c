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
  Aluno *aluno;
  int N, i;
  scanf("%d", &N);
  aluno = malloc( N * sizeof(Aluno));

  if (aluno == NULL){
    printf("Memoria insuficiente");
    return 0;
  }
  for(i = 0; i < N; i++){
    printf("Digite o nome do Aluno\n");
    scanf("%s", aluno[i].nome);
    printf("Digite o sobrenome do Aluno\n");
    scanf("%s", aluno[i].sobrenome);
    printf("Digite o sexo do Aluno M/F\n");
    scanf("%s", aluno[i].sexo);
    printf("Digite o email do Aluno\n");
    scanf("%s", aluno[i].email);
    printf("Digite o telefone do Aluno\n");
    scanf("%li", &aluno[i].telefone);
  }

  for(i = 0; i < N; i++){
    printf("%s %s\n", aluno[i].nome, aluno[i].sobrenome);
    printf("Sexo: %s\n", aluno[i].sexo);
    printf("email: %s\n", aluno[i].email);
    printf("telefone %li\n", aluno[i].telefone);
  }
  free(aluno);
  return 0;
}