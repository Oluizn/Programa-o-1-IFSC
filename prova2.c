#include <stdio.h>
#include <string.h>

int procurar_usuario(char tabela[9][10], char usuario[10])
{
    int i;
    for (i = 0; i < 7; i=i+3)
    {
        if(strcmp(&tabela[i][0], usuario)==0){
            printf("O usuario esta na posicao %d da lista", i+1);
            return i+1;}
    }
    return -1;
}
void mudar_senha_de_acesso(char tabela[9][10], char usuario[10], char novasenha[10])
{
    int i;
    for ( i = 0; i < 7; i=i+3)
        if(strcmp(&tabela[i][0], usuario)==0){
            strcpy(&tabela[i+1][0], novasenha);
            break;
            }
}
int contagem_usuario(char tabela[9][10], char letra[2])
{
    int i, j, aux=0;

    for (i = 0; i < 7; i=i+3)
        for (j = 1; j < 9; j++)
            tabela[i][j]=0;
    for (i = 0; i < 9; i=i+3)
        for (j = 0; j < 10; j++)
            if(strcmp(&tabela[i][j], letra)==0)
                aux++;
    return aux;
}
void print_tabela(char tabela[9][10])
{
    int i;
    for (i = 0; i < 9; i++)
        printf("%s,\t", &tabela[i][0]);
}
int main()
{
    char tabela[9][10] = {"eraldo", "beta", "rw", "silvana", "alfa", "r", "vica", "delta", "w"};
    char tabela1[9][10] = {"eraldo", "beta", "rw", "silvana", "alfa", "r", "vica", "delta", "w"};
    char tabela2[9][10] = {"eraldo", "beta", "rw", "estevao", "alfa", "r", "erica", "delta", "w"};
    char tabela3[9][10] = {"eraldo", "beta", "rw", "silvana", "alfa", "r", "vica", "delta", "w"};
    printf("%d\n\n", procurar_usuario(tabela, "eraldo"));
    print_tabela(tabela);
    printf("\n");
    mudar_senha_de_acesso(tabela, "eraldo", "omega");
    print_tabela(tabela);
    printf("\n%d", contagem_usuario(tabela2, "e"));
    printf("\t%d", contagem_usuario(tabela1, "e"));
    printf("\t%d", contagem_usuario(tabela2, "a"));
    return 0;
}