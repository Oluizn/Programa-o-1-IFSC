#include <stdio.h>

int main(){
    int vet[5], soma = 0, i;
    float media;

    for (i = 0; i < 5; i++)
    {
        printf("Insira um valor para o vetor na posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 5; i++)
    {
        soma = soma + vet[i];
    }

    media = (float) soma / 5;
    printf("%.2f\n", media);
    return 0;
}