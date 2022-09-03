#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float nota;
  char nome[30];
}Alunos;

Alunos* melhorAluno(Alunos*, int, int);
void readAluno(Alunos*, int);


int main(){
  Alunos *aluno, *melhor_aluno;
  int N = 3;
  aluno = (Alunos *) malloc(N * sizeof(Alunos));
  if(aluno == NULL){
    printf("Erro de memoria insuficiente\n");
    return -1;
  }
  readAluno(aluno, N);
  melhor_aluno = melhorAluno(aluno, N, 0);
  printf("%s", melhor_aluno->nome);
  return 0;
}


Alunos* melhorAluno(Alunos *aluno, int N, int x){
  if(N == 0){
    return &aluno[x];
  }else{
    if(aluno[N - 1].nota > aluno[N].nota){
      return melhorAluno(aluno, N - 1, N -1);
    }else{
      return melhorAluno(aluno, N - 1, x);
    }
  } 
}

void readAluno(Alunos *aluno, int N){
  int i;
  for(i = 0; i < N; i++){
    scanf("%s", aluno[i].nome);
    scanf("%f", &aluno[i].nota);
  }
}