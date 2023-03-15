#include <stdio.h>

int main()
{
    int n, i, fat;
    printf("Digite um valor: ");
    scanf("%d", &n);
    i = n;
    for(fat = 1; i > 1; i--)
    {
        fat = fat * i;
    }
    printf("%d\n", fat);
    return 0;
}