#include <stdio.h>

int main(){
  FILE *file;
  int n, soma = 0, i = 1, maior, menor;
  char temp[8];

  if((file = fopen("vetor.txt", "r"))==NULL){
    printf("Erro ao abrir o arquivo!!!\n");
    return -1;
  }
  fscanf(file, "%s", temp);
  fscanf(file, "%d", &n);

  soma += n;
  maior = n;
  menor = n;

  while(!feof(file)){
    fscanf(file, "%s", temp);
    fscanf(file, "%d", &n);
    soma += n;
    i++;
    if(maior < n){
      maior = n;
    }
    if(menor >= n){
      menor = n;
    }
  }
  printf("O maior elemento é: %d\n", maior);
  printf("O menor elemento é: %d\n", menor);
  printf("A media é: %d\n", soma / i);
  fclose(file);
  return 0;
}
