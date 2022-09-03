#include <stdio.h>
#include <stdlib.h>

double potNeg(int, int);
int main(){
  int x, y;
  printf("Digite a potencia e base: ");
  scanf("%d %d", &x, &y);
  printf("%lf\n", potNeg(x, y));
  return 0;
}


double potNeg(int base, int pot){
  if(pot == 0){
    return 1;
  }
  if(pot < 0){
    return 1 / potNeg(base, abs(pot));
  }else{
    return base * potNeg(base, pot - 1);
  }
}