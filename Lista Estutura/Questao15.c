#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item{
  char nome[255];
  char telefone[13];
  struct item *ptr;
}Titem;


int main(){

  Titem *item, *save, *ptritem = NULL;
  int i, j;

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

  // for(i = 0; i < 1; i++){
  //   item = ptritem->ptr;
  //   if(strcmp(ptritem->nome, item->nome) > 0){
  //     save = ptritem;
  //     ptritem = item;
  //     ptritem->ptr = save;
  //   }
  // }

  for(i=0;i<4;i++){
    item = ptritem;
    for(j=0;j<4-1;j++){
      if(strcmp(item->nome, item->ptr->nome) > 0){
        save = item;
        item = item->ptr;
        item->ptr = save;
      }
      item = item->ptr;
    }
  }
  for(i = 0; i < 4; i++){
    item = ptritem;
    printf("nome: %s\n", item->nome);
    printf("telefone: %s\n", item->telefone);
    ptritem = ptritem->ptr;
  }

  return 0;
}