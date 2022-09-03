#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int BinarioToDecimal(char *, int);
int main(){
  char binario[64];
  int tam;
  int decimal;
  printf("Digite o binario: ");
  scanf("%s", binario);
  tam = strlen(binario) - 1;
  decimal = BinarioToDecimal(binario, tam);
  printf("%i\n", decimal);
  return 0;
}

int BinarioToDecimal(char *binario, int tam){
  int decimal = 0;
  int i;
  for(i = 0; tam >= 0; i++, tam--){
    if (binario[tam] == '1'){
      decimal += pow(2, i);
    }
  }
  return decimal;
}