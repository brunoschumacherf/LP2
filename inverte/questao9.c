#include <stdio.h>
#include <stdlib.h>

void numeroPrimo(int);


int main(){
  int i;
  int n;

  scanf("%d", &n);

  for(i = 1; i < n; i++){
    numeroPrimo(i);
  }
  return 0;
}

void numeroPrimo(int num){
  int i, bolean = 1;
  if(num == 1){
    return;
  }

  for(i = 2; i < num; i++){
    if(i != num && num % i == 0){
      bolean = 0;
    }
  }
  if(bolean){
    printf("Numero %d é primo\n", num);
  }
}