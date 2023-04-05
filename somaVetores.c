#include <stdio.h>

int main()
{
    int vet1[5], vet2[5], vet3[5];
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
        vet3[i] = vet1[i] + vet2[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf("A soma dos dois vetores é %d\n", vet3[i]);
    }
    
    
    return 0;
}