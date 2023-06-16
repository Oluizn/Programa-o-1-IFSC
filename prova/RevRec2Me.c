#include <stdio.h>
#include <string.h>
/*
Implementar uma função C que remove todas as vogais de uma string passada como parâmetro. 
A string original (passada como argumento)deve ser alterada. 
Retornar o número de vogais removidas.
*/

int remove_vogal(char x[])
{
    int cont=0, j=0;
    char xcpy[256];
    for (int i = 0; x[i]!=0; i++)
    {
        char aux[2] = x[i];
        if (aux =='a')
            cont++;
        else
            xcpy[j++]=aux;
    }
    xcpy[j]=0;
    strcpy(x, xcpy);
    return cont;
}
int main()
{
    int num;
    num = remove_vogal("alfa");
    return 0;
}