#include <stdio.h>
#include <string.h>

#define TAM_ID 10
#define TAM_NOME 30
#define TAM_USERS 5

typedef struct {
        char nome[30];
        int aval[3];
    } tipo_aluno;

tipo_aluno tabela_alunos[TAM_USERS] = {
{"Silvana e Silva", {10, 7, 9}},
{"Maria Luisa e Silva", {6, 7, 10}},
{"Vica e Silva",{10, 10, 9}},
{"Lara e Silva",{10, 7, 9}},
{"Eraldo e Silva",{3, 2, 5}},
};

tipo_aluno *retorna_aluno(tipo_aluno *pturma, char *nome)
{
    for (int i = 0; i < TAM_USERS; i++)
    {
        if (strcmp(pturma->nome, nome)==0)
            return pturma;
        pturma++;        
    }
    return NULL;
}
float media_aluno(tipo_aluno *pturma, char *nome)
{
    float media=0;
    int x[3];
    retorna_aluno(pturma, nome);
    for (int i = 0; i < 3; i++)
    {
        x[i]=&pturma[i].aval;
    }
}
float media_turma(tipo_aluno *turma)
{

}
int numero_alunos_acima_media(tipo_aluno *pturma)
{

}
int main()
{
    printf("%s\n", retorna_aluno(tabela_alunos, "Silvana e Silva"));
}