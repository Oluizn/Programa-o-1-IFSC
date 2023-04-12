#include <stdio.h>

void let_vet(int aux[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor da posição %d: ", i);
        scanf("%d", &aux[i]);
    }
}
int main()
{
    int vet[5], i;
    let_vet(vet);
    for (i = 0; i < 5; i++)
    {
        printf("vet[%d] = %d, ", i, vet[i]);
    }
    return 0;    
}