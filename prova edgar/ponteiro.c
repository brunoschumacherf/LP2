#include <stdio.h>


int main(){
  int n = 8, *ptrn;
  ptrn = &n;
  printf("%d", *ptrn);
  return 0;
}