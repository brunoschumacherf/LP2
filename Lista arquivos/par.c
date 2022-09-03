#include <stdio.h>


int primo(int);

int main(){
  int i, n, soma = 1;
  FILE *file;
  file = fopen("pares.txt", "w+");
  scanf("%d", &n);
  for(i = 1; i < n; i++){
    if(primo(i)){
      fprintf(file, "%d", i);
      fprintf(file, "%s", "   ");
    }
  }
  fclose(file);
  
  return 0;
}

int primo(int a){
  int i;
  for(i = 2; i < a / 2; i++){
    if(i != a && a % i == 0){
      return 0;
    }
  }
  return 1;
}