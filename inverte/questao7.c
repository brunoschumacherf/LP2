#include <stdio.h>
#include <stdlib.h>

void perfeito(int);
int main(){
  int i = 0;
  for(i = 0; i <=100; i++){
    perfeito(i);
  }
  return 0;
}

void perfeito(int num){
  int i, j, soma = 0, bolean = 0;
  for(i = 0; i < 1000; i++){
    soma += i;
    if(soma == num){
      bolean = 1;
      break;
    }else if(soma > num){
      break;
    }
  }
  if(bolean){
    printf("0 ");
    for(j = 1; j <= i; j++){
      printf("+ %d ", j);
    }
    printf("= %d\n", num);
  }
}