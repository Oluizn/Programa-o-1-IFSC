#include <stdio.h>
#include <string.h>

/*
Implementar uma função C que remove todas as vogais de uma string passada como parâmetro. 
A string original (passada como argumento)deve ser alterada. 
Retornar o número de vogais removidas.
*/

int remove_vogais(char str[])
{
    int j = 0,i = 0,cont = 0;
    char x[256];


    while ( str[i] != 0) {
        char aux = str[i];
        if ( aux =='a' || aux =='e'|| aux =='i' || aux =='o' || aux =='u' ) {
            cont++;
        } else
            x[j++] = aux;
        i++;
    }
    x[j] = 0;
    strcpy(str,x);

    return cont;
}

int remove_vogaisV2(char str[])
{
    int j = 0,i = 0,cont = 0;

    while ( str[i] != 0) {
        char aux = str[i];
        if ( aux =='a' || aux =='e'|| aux =='i' || aux =='o' || aux =='u' ) {
            cont++;
        } else
            str[j++] = str[i]; 
        i++;      
    }
    str[j] = 0;

    return cont;
}

int eh_vogal(char x)
{
     if ( x =='a' || x =='e'|| x =='i' || x =='o' || x =='u' ) 
        return 1;
    else
        return 0;
}
int remove_vogaisV3(char str[])
{
    int j = 0,i = 0,cont = 0;

    while ( str[i] != 0) {

        if ( eh_vogal(str[i]) ) {
            cont++;
        } else
            str[j++] = str[i]; 
        i++;      
    }
    str[j] = 0;

    return cont;
}


int main()
{
    char x[30] = "alfa-beta-gama";
    int num_vogais;

    num_vogais = remove_vogaisV3(x);
    printf("string resultante %s e num vogais removidas é %d\n", x, num_vogais);

    /* este teste não permitido. Por que? */
    num_vogais = remove_vogaisV3("alfa");
    printf("string resultante %s e num vogais removidas é %d\n", x, num_vogais);

    return 0;
}