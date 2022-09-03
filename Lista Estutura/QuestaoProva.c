#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int student_code;
  char title[20];
  int code_book;
  char gender_book[30];
  char author[30];
}Tlivro;

int main(void){

  Tlivro *livro;
  int n, i;
  char gender[30];

  printf("Quantos livos vc vao cadastrar: ");
  scanf("%i", &n);

  livro = malloc(n * sizeof(Tlivro));

  for(i = 0; i < n; i++){
    printf("Digite o codigo do estudante: ");
    scanf("%i", &livro[i].student_code);
    printf("Digite o o titulo do livro: ");
    scanf("%s", livro[i].title);
    printf("Digite o codigo do livro: ");
    scanf("%i", &livro[i].code_book);
    printf("Digite o genero do livro: ");
    scanf("%s", livro[i].gender_book);
    printf("Digite o autor do livro: ");
    scanf("%s", livro[i].author);
  }

  printf("Digite qual genero vc quer buscar: ");
  scanf("%s", gender);
  for(i = 0; i < n; i++){
    if(strcmp(gender, livro[i].gender_book) == 0){
      printf("%i\n", livro[i].student_code);
      printf("%s\n", livro[i].title);
      printf("%i\n", livro[i].code_book);
      printf("%s\n", livro[i].gender_book);
      printf("%s\n", livro[i].author);
    }
  }
  return 0;
}