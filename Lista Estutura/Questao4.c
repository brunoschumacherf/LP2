#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int matricula;
  char nome[20];
  char sobrenome[30];
  float nota;
}Alunos;

int main(){
  Alunos *aluno;

  int N, i, maior, menor;
  float media;
  printf("Qual a quantidade de alunos");
  scanf("%i", &N);

  aluno = malloc(N * sizeof(Alunos));
  printf("Digite a Matricula");
  scanf("%i", &aluno[0].matricula);
  printf("Digite a nome");
  scanf("%s", aluno[0].nome);
  printf("Digite a sobrenome");
  scanf("%s", aluno[0].sobrenome);
  printf("Digite a Nota");
  scanf("%f", &aluno[0].nota);

  menor = 0;
  maior = 0;
  media = aluno[0].nota;
  for(i = 1; i < N; i++){
    printf("Digite a Matricula");
    scanf("%i", &aluno[i].matricula);
    printf("Digite a nome");
    scanf("%s", aluno[i].nome);
    printf("Digite a sobrenome");
    scanf("%s", aluno[i].sobrenome);
    printf("Digite a nota");
    scanf("%f", &aluno[i].nota);

    if (aluno[i].nota > aluno[maior].nota){
      maior = i;
    }
    if (aluno[i].nota < aluno[menor].nota){
      menor = i;
    }
    media += aluno[i].nota;
  }

  printf("A media da turma foi %f", media / N);
  printf("O melhor aluno foi %s com a nota %f", aluno[maior].nome, aluno[maior].nota);
  printf("O pior aluno foi %s com a nota %f", aluno[menor].nome, aluno[menor].nota);

  return 0;
}