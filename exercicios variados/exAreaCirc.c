/*IMPLEMENTAR UMA FUNÇÃO PARA CALCULAR A AREA DE UM ANEL FORMADO POR UM CIRCULO MENOR DENTRO DE UM CIRCULO MAIOR*/
#include <stdio.h>
#include <math.h>
#define pi 3.1415

float area_anel(float raioMaior, float raioMenor)
{
    int area;
    area = pi * (pow(raioMaior, 2)) - pi * (pow(raioMenor, 2));
    return area;
}

int main()
{
    float areaAnel=0, rMaior=0, rMenor=0;

    printf("Insira o valor do circulo maior: ");
    scanf("%f", &rMaior);

    printf("Insira o valor do circulo menor: ");
    scanf("%f", &rMenor);

    areaAnel = area_anel(rMaior, rMenor);

    printf("O valor da area do anel formado por dois circulos de diferentes tamanhos sobrepostos e de %f", areaAnel);

    return 0;
}