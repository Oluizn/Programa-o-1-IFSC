#include <stdio.h>

int soma_vetores(int vetA[], int vetB[], int vetR[], int tam)
{
    int i, result = 0;
    for (i = 0; i < tam; i++)
        vetR[i]=vetA[i]+vetB[i];
    for (i = 0; i < tam; i++)
        if (vetR[i]>result)
            result=vetR[i];
    return result;    
}
int main()
{
    int vetA[5] = {10,15,1,1,1}, vetB[5] = {1,1,1,1,1}, vetR[5];
    int vetC[5] = {35,15,11,7,1}, vetD[5] = {12,21,31,57,8};
    int vetE[5] = {1,25,3,4,5}, vetF[5] = {1,2,3,4,5};
    int vetG[5] = {100,200,300,400,500}, vetH[5] = {1000,55,779,58,43512};
    printf("%d\n", soma_vetores(vetA, vetB, vetR, 5));
    printf("%d\n", soma_vetores(vetC, vetD, vetR, 5));
    printf("%d\n", soma_vetores(vetE, vetF, vetR, 5));
    printf("%d\n", soma_vetores(vetG, vetH, vetR, 5));
}

