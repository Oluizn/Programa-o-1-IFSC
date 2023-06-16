#include <stdio.h>
#include <string.h>
/*
Implementar uma função C que remove todas as vogais de uma string passada como parâmetro. 
A string original (passada como argumento)deve ser alterada. 
Retornar o número de vogais removidas.
*/

int remove_vogal(char x[])
{
    int cont, j;
    for (int i = 0; x[i]!=0; i++)
        if (x[i]!='a' || x[i]!='e' || x[i]!='i' || x[i]!='o' || x[i]!='u')
            x[j++]=x[i];
        else
            cont++;
    return cont;
}
int main()
{

}