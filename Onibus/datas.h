#ifndef DATAS_H_INCLUDED
#define DATAS_H_INCLUDED

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int hs;
    int mnto;
} Hora;

int bisexto(int ano);

Data incrementa(Data d);

int eh_igual(Data d1, Data d2);


#endif
