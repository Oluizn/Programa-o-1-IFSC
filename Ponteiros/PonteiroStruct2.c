#include <stdio.h>

struct TRegistro
{
    char nome[20];
    int idade;
} Tabela[4]={{"joao", 10}, {"maria", 10}, {"jose", 17}, {"lara", 18}};

struct TRegistro *p;

int main()
{
    p = &Tabela[2]; // p apona para o registro 3 da tabela
    printf("O nome na posição é %s e a idade é %d\n", p->nome, p->idade);

    return 0;
}