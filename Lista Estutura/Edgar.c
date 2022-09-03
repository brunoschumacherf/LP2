#include <stdio.h>
#include <stdlib.h>

void insertData(float *nota1, float *nota2, float *nota3, char **alunos, int total){
  int i;
  for (i = 0; i < total; i++){
    printf("Digite o Nome do Aluno: ");
    scanf("%s", alunos[i]);
    printf("Digite a Primeira Nota: ");
    scanf("%f", &nota1[i]);
    printf("Digite a Segunda Nota: ");
    scanf("%f", &nota2[i]);
    printf("Digite a Nota do trabalho: ");
    scanf("%f", &nota3[i]);
  }
}

void resultNota(float *nota1, float *nota2, float *nota3, char **alunos, int total){
  int i;
  float media;

  for(i = 0; i < total; i++){
    media = (nota1[i] * 2 + nota2[i] * 2 + nota3[i] * 4) / 8;

    if(media > 6){
      printf("%s Aprovado\n", alunos[i]);
    }else{
      printf("%s Reprovado\n", alunos[i]);
    }
  }
}

int main(){
  int **result;
  int N, i;
  char **alunos;
  float *nota1, *nota2, *nota3;

  printf("Quantos Alunos\n");
  scanf("%d", &N);

  nota1 = (float *) malloc(N * sizeof(float));
  nota2 = (float *) malloc(N * sizeof(float));
  nota3 = (float *) malloc(N * sizeof(float));
  alunos = (char **) malloc(N * sizeof(char));

  for ( i = 0; i < N; i++){
    alunos[i] = (char *) malloc(20 * sizeof(char));
  }

  insertData(nota1, nota2, nota3, alunos, N);
  resultNota(nota1, nota2, nota3, alunos, N);

  free(nota1);
  free(nota2);
  free(nota3);

  for ( i = 0; i < N; i++){
    free(alunos[i]);
  }
  free(alunos);
  return 0;
}