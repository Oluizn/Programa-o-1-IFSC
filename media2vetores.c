/*função da media de 2 vetores como parametros*/
#include <stdio.h>

float media_vet(int aux[], int tamanho)
{
    int soma = 0, i;
    for (i = 0; i < tamanho; i++)
    {
        soma = soma + aux[i];
    }
    return (float) soma / tamanho;
}
float media_dois_vetores(int aux1[], int tamanho, int aux2[], int tamanho2)
{
    return ((media_vet(aux1, tamanho) + media_vet(aux2, tamanho2))/ 2);
}
float main()
{
    int vet1[5] = {2, 4, 6, 8, 10};
    int vet2[3] = {3, 7, 11};
    printf("%f\n", media_dois_vetores(vet1, 5, vet2, 3));
    return 0;
}