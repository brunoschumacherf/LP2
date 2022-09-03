#include <stdio.h>


int decimalBinario(int);
int main(){
  int decimal, binario;
  printf("Digite o binario: ");
  scanf("%d", &decimal);

  binario = decimalBinario(decimal);

  printf("%d\n", binario);
  return 0;
}

int decimalBinario (int x)
{
  if (x == 0){
     return 0 ;
  }
  return ((x % 2) + 10 * decimalBinario(x / 2)) ;
}