#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int** aloca_matriz(int);
void libera_matriz(int **, int);
void gera_matriz(int **, int);
void grava_matriz(int **, int);


int main(){
  int n, **mat;
  printf("Digite a dimensao da matriz: ");
  scanf("%d", &n);

  mat = aloca_matriz(n);
  srand(time(NULL));
  gera_matriz(mat, n);
  grava_matriz(mat, n);
  libera_matriz(mat, n);

return 0;
}

void gera_matriz(int **m, int d){
  int i, j;
  for(i=0;i<d;i++){
    for(j=0;j<d;j++){
    m[i][j] = rand();
    }
  }
}

void grava_matriz(int **m, int d){
  int i, j;
  FILE *f;

  if ((f=fopen("mat.txt","w"))==NULL){
    printf("Erro ao criar arquivo!!!\n");
    exit(1);
  }

  fprintf(f, "%d\n", d);
  for(i=0;i<d;i++){
    for(j=0;j<d;j++){
      fprintf(f, "%7d", m[i][j]);
    }
    fprintf(f, "\n");
  }
  fclose(f);
}

int** aloca_matriz(int n){
  int **m, i;
  m = malloc(n * sizeof(int *));
  for(i = 0; i < n; i++){
    m[i] = malloc(n * sizeof(int));
  }
  return m;
}

void libera_matriz(int **m, int n){
  int i;
  for(i = 0; i < n; i++){
    free(m[i]);
  }
  free(m);
}