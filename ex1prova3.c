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
    tipo_aluno *aluno=retorna_aluno(pturma, nome);
    if (aluno!=NULL){
        for (int i = 0; i < 3; i++)
            media+=aluno->aval[i];    
        return media/3;
    }
    else
        return -1;
}
float media_turma(tipo_aluno *pturma)
{
    float soma=0;
    for (int i = 0; i < TAM_USERS; i++)
    {
        soma+=media_aluno(pturma, pturma[i].nome);
    }
    return soma/TAM_USERS; 
}
int numero_alunos_acima_media(tipo_aluno *pturma)
{
    float cont=0, media_turma_valor = media_turma(pturma);
    for (int i = 0; i < TAM_USERS; i++)
        if (media_aluno(pturma, pturma[i].nome) > media_turma_valor)
            cont++;
    return cont;
}
int main()
{
    printf("%s\n", retorna_aluno(tabela_alunos, "Silvana e Silva"));
    if (retorna_aluno(tabela_alunos, "Antonio")==NULL)
        printf("Usuário não encontrado na tabela\n");
    printf("media do aluno %s = %.2f\n",tabela_alunos->nome, media_aluno(tabela_alunos, "Eraldo e Silva"));
    printf("%.2f\n", media_aluno(tabela_alunos, "Luiz"));
    printf("media da turma %.2f\n", media_turma(tabela_alunos));
    printf("%d aluno acima da média\n", numero_alunos_acima_media(tabela_alunos));
}