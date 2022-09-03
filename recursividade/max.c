#include <stdio.h>

int max(int *, int *, int, int);

int main(){

  int vetor[10];
  int res, max1 = 0, i;
  for(i = 0; i < 10; i++){
    scanf("%d", &vetor[i]);
  }
  res = max(vetor, &max1, 10, 0);
  printf("%d\n", res);
  return 0;
}

int max(int* vetor, int* maxi, int tam, int i){
  if(*maxi < *vetor){
    maxi = vetor; 
  }
  if (i == tam){
    return tam;
  }
  return max(&vetor[i + 1], maxi, tam, i+1);
}