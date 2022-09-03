#include <stdio.h>
#include <stdlib.h>

typedef struct integer{
  int num;
  struct integer *integer;
}Integer;

void readInteger(Integer *);
void printInteger(Integer *);

int main(void){
  Integer *integer = NULL;
  readInteger(integer);
  printInteger(integer);
  return 0;
}

void readInteger(Integer *integer){
  int bol;
  Integer *i;
  integer = malloc(sizeof(Integer));
  i = integer;
  printf("Digite um numero: ");
  scanf("%d", &i->num);
  while(1){
    printf("Quer digitar outro numero?\n1-sim\n2-não\n");
    scanf("%d", &bol);
    if(bol == 2){
      i->integer = NULL;
      break;
    }else if(bol != 1){
      printf("Opção invalida\n");
      continue;
    }
    i->integer = malloc(sizeof(Integer));
    i = i->integer;
    printf("Digite um numero: ");
    scanf("%d", &i->num);
  }
}

void printInteger(Integer *i){
  while(i == NULL){
    printf("%d\n", i->num);
    i = i->integer;
  }
}