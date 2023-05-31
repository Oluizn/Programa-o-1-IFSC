#include <stdio.h>

float area (float valor1, float valor2)
{
    float area_circulo, area_quadrado;
    area_circulo = 3,14 * valor1 * valor1;
    area_quadrado = valor2 * valor2;

    if (area_circulo > area_quadrado)
        return 0;
    else
        return 1;
}

float main()
{
    float raio, lado;
    int maiorArea;
    maiorArea = area (raio, lado);
    printf("Insira o raio do círculo: \n");
    scanf("%f", &raio);

    printf("Insira a medida do lado do quadrado: \n");
    scanf("%f", &lado);

    if (area == 0)
        printf("A area do círculo é maior que a do quadrado\n");
    else
        printf("A área do quadrado é maior que do círculo\n");
    
    return 0;
}