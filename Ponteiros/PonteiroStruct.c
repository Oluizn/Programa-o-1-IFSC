#include <stdio.h>

struct TRegistro 
{
    char nome[20];
    int idade;
} pessoa ={"Maria", 10};

int main()
{
    struct TRegistro *p;
    p = &pessoa; // p aponta para o registro pessoa
    printf("O nome da pessoa é %s e a idade é %d\n", p->nome, p->idade);

    return 0;
}
