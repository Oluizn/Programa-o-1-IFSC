#include <stdio.h>

int main()
{
    float raio, lenght, height, acirculo, aquadrado;
    
    printf("Entre com o raio do círculo: ");
    scanf("%f", &raio);

    printf("Entre com a largura do quadrado: ");
    scanf("%f", &lenght);

    printf("Entre com a altura do quadrado: ");
    scanf("%f", &height);

    acirculo = 3.14 * (raio * raio);
    aquadrado = lenght * height;

    if (acirculo>aquadrado)
        printf("A área do círculo é maior que a do quadrado!");
    else
        printf("A área do quadrado é maior que a do círculo!");

    return 0;
}