#include <stdio.h>

int main()
{
    int num, somatorio, i;
        do
        {
            printf("Digite um valor maior ou igual a 1: ");
            scanf("%d", &num);
        } while (num < 1);

        for (somatorio = 0, i = 1;i <=num; i++)
        {
            somatorio = somatorio + i;
        }
    printf("%d\n", somatorio);
    return 0;
}