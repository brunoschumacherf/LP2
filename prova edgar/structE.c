#include <stdio.h>
#include <stdlib.h>

typedef struct Alunos{
  float nota;
  char nome[30];
  struct Alunos *aluno;
}Alunos;

Alunos* readAluno();
void mostrarAluno(Alunos*);

int main(){
  Alunos *aluno;
  aluno = readAluno();
  mostrarAluno(aluno);
}



Alunos* readAluno(){
  Alunos *aluno = NULL, *ptr;
  int option = 1;

  ptr = aluno;
  while(option == 1){
    if (aluno == NULL){
      aluno = (Alunos *) malloc(sizeof(Alunos));
      if(aluno == NULL){
        printf("Erro de memoria insuficiente\n");
        exit(-1);
      }
      ptr = aluno;
    }else{
      ptr->aluno = (Alunos *) malloc(sizeof(Alunos));
      if(ptr->aluno == NULL){
        printf("Erro de memoria insuficiente\n");
        exit(-1);
      }
      ptr = ptr->aluno;
    }
    printf("Digite o nome: ");
    scanf("%s", ptr->nome);
    printf("Digite a nota: ");
    scanf("%f", &ptr->nota);
    fflush(stdin);
    printf("Quer continuar 1-Sim");
    scanf("%d", &option);
    fflush(stdin);
  }
  ptr->aluno = NULL;
  return aluno;
}

// imprimindo lista encadeada de Alunosn
void mostrarAluno(Alunos *aluno){
  Alunos *ptr;
  ptr = aluno;
  while(ptr != NULL){
    printf("Nome: %s e Nota: %f\n", ptr->nome, ptr->nota);
    ptr = ptr->aluno;
  }
}