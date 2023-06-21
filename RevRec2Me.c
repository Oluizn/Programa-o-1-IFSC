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
        char aux= x[i];
        if (aux =='a' || aux =='e' || aux =='i' || aux =='o' || aux =='u')
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
    char str[10] = "antonio";
    num = remove_vogal(str);
    printf("Quantidade de vogais %d e string resultante %s", num, str);
    return 0;
}