#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float ** somaMatriz(float **, float **, int, int);
float ** subMatriz(float **, float **, int, int);
void printmatriz(float **, int, int);
void freematriz(float **, int);
float ** alocamatriz(int, int);
void lerMatriz(float **, int, int);

int main(){
  float **matrizA, **matrizB, **soma, **subtracao;
  int m, n;
  printf("Digite o numero de linhas da matriz: ");
  scanf("%d", &m);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%d", &n);
  matrizA = alocamatriz(m, n);
  matrizB = alocamatriz(m, n);
  lerMatriz(matrizA, m, n);
  lerMatriz(matrizB, m, n);
  soma = somaMatriz(matrizA, matrizB, m, n);
  subtracao = subMatriz(matrizA, matrizB, m, n);
  printf("SOMA DA MATRIZ: \n");
  printmatriz(soma, m, n);
  printf("SUBTRAÇÃO DA MATRIZ: \n");
  printmatriz(subtracao, m, n);
  freematriz(matrizA, n);
  freematriz(matrizB, n);
  freematriz(soma, n);
  freematriz(subtracao, n);
  return 0;
}

float ** alocamatriz(int m, int n){
  int i;
  float **matriz;
  matriz = malloc(m * sizeof(float **));

  if(matriz == NULL){
    puts ("Memoria insuficiente");
    exit(-1);
  }

  for(i = 0; i < m; i++){
    matriz[i] = malloc(n * sizeof(float **));
    if(matriz[i] == NULL){
      puts ("Memoria insuficiente");
      exit(-1);
    }
  }
  return matriz;
}

void lerMatriz(float **matriz, int m, int n){
  int i, j;
  for (i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      scanf("%f", &matriz[i][j]);
    }
  }
}

float ** somaMatriz(float **matrizA, float **matrizB,int m, int n){
  int i, j;
  float **matrizR;
  matrizR = alocamatriz(m, n);
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }
  return matrizR;
}

float ** subMatriz(float **matrizA, float **matrizB,int m, int n){
  int i, j;
  float **matrizR2;
  matrizR2 = alocamatriz(m, n);
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      matrizR2[i][j] = matrizA[i][j] - matrizB[i][j];
    }
  }
  return matrizR2;
}


void printmatriz(float **matriz, int m, int n){
  int i, j;
  for (i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      printf("%f  ", matriz[i][j]);
    }
    printf("\n");
  }
}

void freematriz(float **matriz, int n){
  int i;
  for(i = 0; i < n; i++){
    free(matriz[i]);
  }
  free(matriz);
}


