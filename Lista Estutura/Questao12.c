#include <stdio.h>
#include <stdlib.h>


typedef struct{
  char nome_equipe[40];
  int win, a_tie, loss, c_red, c_yellow, score, score_c;
}Futebol;


int main(){
  Futebol *fut;
  int n, i;
  int score = 0, atack = 0, defense = 0, fair_play = 0;

  printf("Digite o numero de equipes: ");
  scanf("%i", &n);

  fut = malloc(n * sizeof(Futebol));

  for (i = 0; i < n; i++){
    printf("Nome da equipe: ");
    scanf("%s", fut[i].nome_equipe);
    printf("Digite o total de jogos ganho: ");
    scanf("%i", &fut[i].win);
    printf("Digite o total de jogos empatados: ");
    scanf("%i", &fut[i].a_tie);
    printf("Digite o total de jogos perdidos: ");
    scanf("%i", &fut[i].loss);
    printf("Digite quantos cartoes vermelhos: ");
    scanf("%i", &fut[i].c_red);
    printf("Digite quantos cartoes amarelos: ");
    scanf("%i", &fut[i].c_yellow);
    printf("Digites quantos gols à favor: ");
    scanf("%i", &fut[i].score);
    printf("Digites quantos gols contra: ");
    scanf("%i", &fut[i].score_c);

    if(fut[score].win * 3 + fut[score].a_tie > fut[i].win * 3 + fut[i].a_tie){
      score = i;
    }
    if(fut[atack].score < fut[i].score){
      atack = i;
    }
    if(fut[defense].score_c > fut[i].score_c){
      defense = i;
    }
    if((fut[fair_play].c_red * 2 + fut[fair_play].c_yellow) / 3 < (fut[i].c_red * 2 + fut[i].c_yellow)){
      fair_play = i;
    }
  }


  printf("A equipe com mais pontos foi %s\n", fut[score].nome_equipe);
  printf("A equipe com melhor atack foi %s\n", fut[atack].nome_equipe);
  printf("A equipe com a melhor defesa foi %s\n", fut[defense].nome_equipe);
  printf("A equipe fair play foi %s\n", fut[fair_play].nome_equipe);
  return 0;
}