#include <stdio.h>

int main()
{
    int num, somatorio = 0, i = 1;
    

        do
        {
            printf("Digite um valor maior ou igual a 1: ");
            scanf("%d", &num);
        } while (num < 1);

        while (i <=num)
        {
            somatorio = somatorio + i;
            i++;
        }
    printf("%d\n", somatorio);
    return 0;
}