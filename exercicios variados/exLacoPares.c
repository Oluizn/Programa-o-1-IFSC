#include <stdio.h>

int main ()
{
    int num, resto;

    printf("Digite um número: ");
    scanf("%d", &num);

    resto = num % 2;

    if (resto == 0)
    {
        for(; num > -1; num = num -2)
        {  
            printf("%d\n", num);
        }
    }

    else
    {
        for(num = num - 1; num > -1; num = num -2)
        {  
            printf("%d\n", num);
        }
    }
    return 0;
}