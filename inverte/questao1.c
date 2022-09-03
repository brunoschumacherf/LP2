#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* DecimalToBinario(int);

int main(void) {
  int num, i, j;
  char *binario;

  printf("Digite o decimal: ");
  scanf("%d", &num);
  binario = DecimalToBinario(num);
  j = strlen(binario);
  for(i = j; i >= 0; i--){
    printf("%c", binario[i]);
  }
  printf("\n");
  free(binario);
  return 0;
}

char* DecimalToBinario(int num){
  char *binario;
  binario = malloc(64 * sizeof(char));
  int i = 0;
  while(num != 1){
    if(num % 2 == 1){
      binario[i] = '1';
    }else{
      binario[i] = '0';
    }
    i++;
    num = num / 2;
  };
  binario[i] = '1';
  return binario;
}
