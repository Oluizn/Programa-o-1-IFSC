#include <stdio.h>
#include <string.h>

int procurar_usuario(char tabela[9][10], char usuario[10])
{
    int i;
    for (i = 0; i < 7; i+3)
    {
        if(strcmp(&tabela[i][0], usuario)==0)
            return i+1;
        return -1;
    }
}
void mudar_senha_de_acesso(char tabela[9][10], char usuario[10], char novasenha[10])
{
    int i, j;
    for ( i = 0; i < 9; i+3)
        if(strcmp(&tabela[i][0], usuario)==0){
            strcpy(&tabela[i+1][0], novasenha);
            break;
            }
}
int contagem_usuario(char tabela[9][10], char letra[2])
{
    int i, j, aux=0;
    for (i = 0; i < 9; i+3)
        for (j = 0; i < 10; i++)
            if(strcmp(&tabela[i][j], letra)==0)
                aux++;
    return aux;
    // incompleto
}
void print_tabela(char tabela[9][10])
{
    int i;
    for (i = 0; i < 6; i++)
        printf("%s,\n", &tabela[i][0]);
}
int main()
{
    char tabela[9][10] = {"eraldo", "beta", "rw", "silvana", "alfa", "r", "vica", "delta", "w"};
    printf("%d\n", procurar_usuario(tabela, "eraldo"));
    print_tabela(tabela);
    mudar_senha_de_acesso(tabela, "eraldo", "omega");
    printf("%d\n", contagem_usuario(tabela, "e"));
    print_tabela(tabela);
    return 0;
}