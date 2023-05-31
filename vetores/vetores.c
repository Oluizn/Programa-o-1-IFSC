#include <stdio.h>
/*Criar vetor tamanho 5, iniciar vetor com valores correspondentes à sua posição*/

int main()
{
    int vet1[5], vet2[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        vet1[i] = i;
    }  
    for (i = 0; i < 5; i++)
    {
        vet2[i] = vet1[i] * 5;
    }
    for (i = 0; i < 5; i++)
    {
        printf("vet2[%d] tem o valor de %d\n", i, vet2[i]);
    }

    return 0;
}