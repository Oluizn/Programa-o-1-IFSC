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

tipo_aluno retorna_aluno(tipo_aluno *paluno, char *nome)
{
    for (int i = 0; i < TAM_USERS; i++, paluno++)
        if (strcmp(paluno->nome, nome)==0)
            return paluno;    
    return NULL;
}
float media_aluno(tipo_aluno *paluno, char *nome)
{
    float media=0;
    tipo_aluno *aluno=retorna_aluno(paluno, nome);
    if (aluno!=NULL){
        for (int i = 0; i < 3; i++)
            media += aluno->aval[i];    
        return media/3;
    }
    else 
        return -1;
}
float media_turma(tipo_aluno *pturma)
{
    float media=0;
    for (int i = 0; i < TAM_USERS; i++)
        media += media_aluno(pturma, pturma[i].nome);
    return media/TAM_USERS;
}
int numer_alunos_acima_media(tipo_aluno *pturma)
{
    float mediaTurma = media_turma(pturma);
    int cont=0;
    for (int i = 0; i < TAM_USERS; i++)
        if (media_aluno(pturma, pturma[i].nome)>mediaTurma)
            cont++;
    return cont;
}