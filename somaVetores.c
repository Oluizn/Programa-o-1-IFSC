#include <stdio.h>

void soma_vetores(int vetA[], int vetB[], int vetRes[], int dimensao)
{
    int i;
    for (i = 0; i < dimensao; i++)
    {
        vetRes[i] = vetA[i] + vetB[i];
    }
    return;
    
}
void print_vetor(int vet[], int dimensao)
{
    int i;
    for (i = 0; i < dimensao; i++)
    {
        printf("%d, ", vet[i]);
    }
    return;
}
int main()
{
    int x[5] = {6, 9, 7, 3, 1},
        y[5] = {10, 3, 5, 8, 1},
        w[5];
    
    soma_vetores(x, y, w, 5);
    print_vetor(w, 5);
    
    return 0;
}