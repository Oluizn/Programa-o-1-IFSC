#include <stdio.h>
#include <math.h>

int main()
{
    struct triangulo_retangulo
    {
        float base, altura;
    };
    struct triangulo_retangulo x;
    float areaTrianguloRetangulo, hipo;

    x.altura = 3;
    x.base = 4;

    areaTrianguloRetangulo = (x.base*x.altura)/2;

    sqrt(hipo = (pow(x.base, 2)+pow(x.altura, 2))); // ?
    printf("%.2f\n %.2f\n", areaTrianguloRetangulo, hipo);

    return 0;
}