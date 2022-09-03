#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nome[20];
  char matricula[8];
  float cr;
}Dados;

Dados* aloca_dados(int);
void ler_alunos(int, Dados*);
void grava_alunos(Dados*, int, FILE*);
FILE* new_arquivo(char []);

int main(void) {
  int N;
  Dados *alunos;
  FILE *file;
  printf("Quantos alunos na sala: ");
  scanf("%d", &N);
  alunos = aloca_dados(N);
  ler_alunos(N, alunos);
  file = new_arquivo("alunos.dat");
  grava_alunos(alunos, N, file);
  return 0;
}

Dados* aloca_dados(int n){
  Dados *aluno;
  aluno = malloc(n * sizeof(Dados));
  if(aluno == NULL){
    printf("ERROR");
    exit(-1);
  }
  return aluno;
}

void ler_alunos(int n, Dados *alunos){
  int i;
  for(i = 0; i < n; i++){
    printf("Digite o nome do aluno: ");
    scanf("%s", alunos[i].nome);
    printf("Digite a matricula do aluno: ");
    scanf("%s", alunos[i].matricula);
    printf("Digite o CR do aluno: ");
    scanf("%f", &alunos[i].cr);
  }
}
FILE* new_arquivo(char caminho[]){
  FILE *file;
  file = fopen(caminho, "wb");
  if(file == NULL){
    printf("ERROR");
    exit(-1);
  }
  return file;
}

void grava_alunos(Dados *alunos, int n, FILE *file){
  fwrite(alunos, sizeof(Dados), n, file);
  fclose(file);
}