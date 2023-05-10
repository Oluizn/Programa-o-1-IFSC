#include <stdio.h>

int elementos_pares(int vet1[], int tam)
{
    int i, aux = 0;

    for (i = 0; i < tam; i++)
    {        
        if (vet1[i]%2 == 0)
            aux++;
    }
    return aux;
}

int compare_vetores(int x[], int y[], int tam)
{
    int i, aux1, aux2, result;
    aux1 = elementos_pares(x, tam);
    aux2 = elementos_pares(y, tam);
    

    if (aux1==aux2)
    {
        result = 0;
    }
    else if (aux1>aux2)
    {
        result = -1;
    }
    else
        result = 1; 

    return result;
}

int main ()
{
    int vet1[3]={1, 2, 5}, vet2[3] = {2, 4, 7};
    printf("Retorno %d\n", compare_vetores(vet1, vet2, 3));
    
    return 0;
}