#include <stdio.h>
#include <string.h>
#define TAM_TABELA 4
struct TRegistro
{
    char nome[20];
    int idade;
}Tabela[TAM_TABELA] = {
          {"joao",18,},
          {"maria",18,},
          {"jose",19,},
          {"lara",17,},
};
struct TRegistro *p;
struct TRegistro *retorna_usuario(struct TRegistro  *tabela, int tam_tabela, char *usuario)
{
    for (int i = 0; i < tam_tabela; i++)
    {
        if(strcmp(tabela->nome, usuario)==0)
            return tabela;
        tabela++;
    }
    return NULL;
}
struct TRegistro *retorna_usuariov2(struct TRegistro  *tabela, int tam_tabela, char *usuario)
{
    for (int i = 0; i < tam_tabela; i++)
        if(strcmp(tabela[i].nome, usuario)==0)
            return &tabela[i];
    return NULL;
}
int main()
{
    p = retorna_usuario(Tabela, TAM_TABELA, "joao");
    if(p!=NULL)
        printf("Usuário %s está na tabela\n", p->nome);
    else
        printf("O usuário não está na tabela\n");
    return 0;
}
