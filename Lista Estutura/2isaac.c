#include <stdio.h>
#include <stdlib.h>

typedef struct{

  char nome[20], sobrenome[20];
  char sexo[10], email[30];
  int idade;
  long int telefone;

} Aluno;

int main(){
  
  Aluno aluno[3];
  Aluno *pAluno;
  int i;
  
  for(i = 0; i < 3; i++){
    printf("Qual o nome do aluno?");
    scanf("%s", aluno[i].nome);

    printf("Qual o sobrenome do aluno?");
    scanf("%s", aluno[i].sobrenome);

    printf("Qual a idade do aluno?");
    scanf("%d", &aluno[i].idade);

    printf("Qual o telefone do aluno?");
    scanf("%ld", &aluno[i].telefone);

    printf("Qual o email do aluno?");
    scanf("%s", aluno[i].email);
    
  }

  for(i = 0; i < 3; i++){
  //pAluno = &aluno[i];
  printf("Nome: %s ", aluno[i].nome);

  printf("%s\n", aluno[i].sobrenome);

  printf("Idade: %d\n", aluno[i].idade);

  printf("Telefone: %ld\n", aluno[i].telefone);

  printf("Sexo: %s\n", aluno[i].sexo);

  printf("E-mail: %s\n", aluno[i].email);
    
  }
  return 0;
}