/*IMPLEMENTAR UMA FUNÇÃO PARA CALCULAR A AREA DE UM ANEL FORMADO POR UM CIRCULO MENOR DENTRO DE UM CIRCULO MAIOR*/
#include <stdio.h>
#define pi 3.1415
float area_anel(float raioMaior, float raioMenor)
{
    int area;
    area = ((pi * raioMaior * raioMaior)-(pi * raioMenor * raioMenor));
    return area;
}

int main()
{
    float areaAnel, r1, r2;
    // if(r1 > r2)
        areaAnel = area_anel(r1, r2);
    // else
    //     areaAnel = area_anel(r2, r1);
    
    printf("Insira o raio do primeiro círculo: ");
    scanf("%f", &r1);

    printf("Insira o raio do segundo círculo: ");
    scanf("%f", &r2);

    printf("A área do anel é %f", areaAnel);
}

// ERRADO, CORRIGIR