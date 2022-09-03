#include <stdio.h>
#include <stdlib.h>


typedef struct{
  char nome_equipe[40];
  int win, a_tie, loss, c_red, c_yellow, score, score_c;
  int score_tot;
}Futebol;

int main(){
  Futebol *fut;
  int n, i, j;
  int score = 0, atack = 0, defense = 0, fair_play = 0, *ordem, save;

  printf("Digite o numero de equipes: ");
  scanf("%i", &n);

  fut = malloc(n * sizeof(Futebol));
  ordem = malloc(n * sizeof(int));

  for (i = 0; i < n; i++){
    ordem[i] = i;
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
    fut[i].score_tot = fut[i].win * 3 + fut[i].a_tie;
  }

  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(fut[ordem[j]].score_tot<fut[ordem[j+1]].score_tot){
        save = ordem[j];
        ordem[j] = ordem[j+1];
        ordem[j+1] = save;
      }
    }
  }
  for(i = 0; i < n; i++){
    printf("%s  ", fut[ordem[i]].nome_equipe);
    printf("   %i  ", fut[ordem[i]].win);
    printf("   %i  ", fut[ordem[i]].a_tie);
    printf("   %i  ", fut[ordem[i]].loss);
    printf("   %i  ", fut[ordem[i]].c_yellow);
    printf("   %i  ", fut[ordem[i]].c_red);
    printf("   %i  ", fut[ordem[i]].score);
    printf("   %i  ", fut[ordem[i]].score_c);
    printf("   %i  ", fut[ordem[i]].score - fut[ordem[i]].score_c);
    printf("   %i  ", fut[ordem[i]].score_tot);
    printf("\n");
  }
  return 0;
}