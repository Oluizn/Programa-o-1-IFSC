/*Implementar uma função para calcular a media e retornar essa media, dos valores de um vetor passados como parametro.*/
#include <stdio.h>

float media_vet(int aux[5])
{
    int soma = 0, i;
    for (i = 0; i < 5; i++)
    {
        soma = soma + aux[i];
    }
    return (float) soma / 5;
}
int main()
{
    int vet[5] = {3, 7, 11, 19, 21};
    printf("Valor da media é %f\n", media_vet(vet));
}