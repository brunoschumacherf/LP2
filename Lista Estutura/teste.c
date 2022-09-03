#include <stdio.h>

int main(void){
  int i, j, soma = 0, cont;

  for (i = 0; i <= 1000; i++){
    cont = 0;
    for (j = 0; j <= 1000; j++){
       if((i / j) == 1 || (i / j) == i){
         cont++;
      }
    }
    if(cont == 2 || cont == 1){
      soma += i;
    }
  }
    printf("%i", soma);
  return 0;
}