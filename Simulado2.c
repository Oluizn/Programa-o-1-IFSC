#include <stdio.h>
#include <string.h>

int mudar_direito_acesso(char tabela[6][10], char usuario[], char direito[])
{
    int i, aux;

    for (i = 0; i < 5; i=i+2)
    {
        aux = strcmp(&tabela[i][0], usuario);
        if (aux == 0)
            break;
    }
    if (i == 6)
        return -1;
    else
        /*Atualizar o direito de acesso*/
}