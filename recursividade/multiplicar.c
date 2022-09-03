#include <stdio.h>

int mult(int, int);

int main(){
  int x, y, res;
  scanf("%d %d", &x, &y);
  res = mult(x, y);
  printf("%d\n", res);
  return 0;
}

int mult(int x, int y){
  if(y == 1){
    return x;
  }
  return x + mult(x, y - 1);
}