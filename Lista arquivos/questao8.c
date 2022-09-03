#include <stdio.h>
#include <stdlib.h>



int main(){
  FILE *file;
  int n;
  float *vetor;
  int i;
  if((file = fopen("vetor.dat", "ab+")) == NULL){
    printf("ERROR");
    exit(-1);
  }

  printf("Quantos elementos: ");
  scanf("%d", &n);
  vetor = malloc(n * sizeof(float));
  for(i = 0; i < n; i++){
    scanf("%f", &vetor[i]);
  }
  fwrite(&n, sizeof(int), 1, file);
  fwrite(vetor, sizeof(float), n, file);
  fclose(file);
  return 0;
}