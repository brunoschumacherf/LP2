#include <stdio.h>
#include <math.h>

int main(void) {
  int i = 0;
  long int num;
  int decimal = 0;
  scanf("%ld", &num);
  while(num > 1){
    if(num % 10 == 1){
      decimal += pow(2, i);
    }
    i++;
    num = num / 10;
  }
  if(num > 0){
    decimal += pow(2, i);
  }
  printf("%d", decimal);
  return 0;
}