#include <stdio.h>
#include <string.h>

int mudar_direito_acesso(char tabela[6][10], char usuario[], char direito[])
{
    int i, aux;
    for (i = 0; i < 6; i=i+2)
    {
        aux = strcmp(&tabela[i][0], usuario);

        if (aux == 0)
            break;
    }
    if (i == 6)
        return -1;
    else
    {
        strcpy(&tabela[i+1][0], direito);
        return 0;
    }
}
void print_tabela(char tabela[6][10])
{
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("%s,\n", &tabela[i][0]);
    }
}

int main()
{
    char tabela[6][10] = {"Eraldo", "rw", "Silvana", "r", "Lara", "rw"}, usuario[10], direito[3];
    int ret;
    ret = mudar_direito_acesso(tabela, "Lara", "r");
    printf("%d\n\n", ret);
    print_tabela(tabela);
}