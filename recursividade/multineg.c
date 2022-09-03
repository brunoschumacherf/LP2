#include <stdio.h>
#include <stdlib.h>


int multneg(int, int);
int main(){
  int x, y;

  printf("Dgite o valor de x e y: ");
  scanf("%d %d", &x, &y);

  printf("O resultado é: %d", multneg(x, y));
  return 0;
}

int multneg(int x, int y){
  if(y == 1){
    return x;
  }
  if(y < 0){
    return ((x + multneg(x, (abs(y) - 1))) * -1);
  }else{
    return x + multneg(x, y - 1);
  }
}