#include <stdio.h>

float converte_temp(float celsius, float fahrenheit)
{
    float tempFinal;
    if (celsius > fahrenheit)
        tempFinal = (celsius * 1.8) + 32;
    else
        tempFinal = (fahrenheit - 32) / 1.8;
    
    return tempFinal;
}

float main()
{
    int temp1, temp2;
    float temperatura;
    printf("Insira a temperatura em celsius: ");
    scanf("%f", &temp1);

    printf("Insira a temperatura em fahrenheit: ");
    scanf("%f", &temp2);

    temperatura = converte_temp(temp1, temp2);
    printf("Conversão %f celsius para %f fahrenheit\n", temp1, temperatura);
}

/*CORRIGIR*/