#include <stdio.h>
struct TRegistro
{
    char nome[20];
    int idade;
} Tabela[4] = {
          {"joao",18,},
          {"maria",18,},
          {"jose",19,},
          {"lara",17,},
}
;
struct TRegistro *p;

void MudarStruct(struct TRegistro *p1, int indice)
{
  Tabela[indice] = *p1;
}

main()
{
    struct TRegistro aux = {"luisa",16};

    MudarStruct(&aux,2);
    p = &Tabela[2];
    printf("O nome na posição 2 é %s e idade = %d\n", p->nome,p->idade);
}