#include <stdio.h>
#include <string.h>
// #include <stdlib.h>

#define MAX 129

// char[MAX][MAX];

void contaSub(char [], char[], int);
int compare(char[], char[], int);
// int TesteSub(char [])

int main(){
  int h, i, j, k, A, B, N;
  char binario[MAX];
  char sub[MAX];
  scanf("%d %d %d", &A, &B, &N);
  scanf("%s", binario);
  for(h = A; h <= B; h++){
    for(i = 0; i < strlen(binario) - 1; i++){
      for(j = i, k = 0; j < h + i; j++, k++){
        if(binario[j] == '2'){
          break;
        }
        sub[k] = binario[j];
      }
      // printf("%s\n", sub);
      contaSub(sub, binario, h);
    }
  }

  return 0;
}

void contaSub(char substring[], char stringMaior[], int N){
  substring[N] = '\0';
  // printf("%s\n", substring);
  int i, j, k, cont = 0;
  char subTeste[MAX];
  for(i = 0; i < strlen(stringMaior) - 1; i++){
    for(j = i, k = 0; j < N + i; j++, k++){
      if(stringMaior[j] == '2'){
        break;
      }
      subTeste[k] = stringMaior[j];
    }
    subTeste[k + 1] = '\0';
    if(compare(substring, subTeste, N)){
      cont++;
    }
  }
  if(cont > 0){
    printf("%d %s\n", cont, substring);
  }
}

int compare(char teste1[], char teste[], int N){
  int i;
  for (i = 0; i <= N; i++){
    if(teste1[i] != teste[i] ){
      return 0;
    }
  }
  return 1;
}