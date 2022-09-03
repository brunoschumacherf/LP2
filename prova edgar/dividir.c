#include <stdio.h>

int main(){
  FILE *file;
  float soma = 0, n;
  int i = 0;
  file = fopen("arquivo.txt", "r");
  if(file == NULL){
    printf("ERROR");
    return -1;
  }
  while(!feof(file)){
    fscanf(file, "%f", &n);
    soma += n;
    i++;
  }
  printf("%f", soma / i);
  fclose(file);
  return 0;
}