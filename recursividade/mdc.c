#include <stdio.h>

int mdc(int, int);

int main(){
  int x, y, result;
  scanf("%d %d", &x, &y);
  result = mdc(x, y);
  printf("%d\n", result);
  return 0;
}

int mdc(int x, int y){
  if (y == 0){
    return x;
  }
  return mdc(y, x % y);
}