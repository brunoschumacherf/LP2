#include <stdio.h>
#include <stdlib.h>

typedef struct item{
  char nome[255];
  char telefone[13];
  struct item *ptr;
}Titem;

int main(){
  Titem *ptritem = NULL, *item;
  int i;

  for(i = 0; i < 4; i++){
    if (ptritem == NULL){
      ptritem = malloc(sizeof(Titem));
      item = ptritem;
    }else{
      item->ptr = malloc(sizeof(Titem));
      item = item->ptr;
    }
    scanf("%s", item->nome);
    scanf("%s", item->telefone);
  } 

  for(i = 0; i < 4; i++){
    item = ptritem;
    printf("nome: %s\n", item->nome);
    printf("telefone: %s\n", item->telefone);
    ptritem = ptritem->ptr;
    free(item);
  }
  return 0;
}