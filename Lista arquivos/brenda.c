#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct
{
    int seg;
    int min;
    int hora;
    int dia;
    int mes;
    int ano;
} Tempo;

void data_hora(FILE *loja, Tempo *data)
{
  loja=fopen("loja.txt","w+");
 if (loja == NULL)
    {
        printf("Erro ao abrir o arquivo!!!");
        exit(1);
    }
    time_t segundos;
    time(&segundos);
    data = localtime(&segundos);

  printf( "\nData: %d/%d/%d",
            data->dia,data->mes+1,data->ano+1900);
    fprintf(loja, "\nData: %d/%d/%d",
            data->dia,data->mes+1,data->ano+1900);
    fprintf(loja, "%d:%d:%d",
            data->hora, data->min, data->seg);

}


int main()
{
    FILE *loja;
    Tempo *data;
    loja=fopen("loja.txt","w");
    if (loja == NULL)
    {
        printf("Erro ao abrir o arquivo!!!");
        exit(1);
    }
     
    data_hora(loja,data);
    fclose(loja);
    
    return 0;
}