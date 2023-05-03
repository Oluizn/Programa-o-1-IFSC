#include <stdio.h>

void desenho_linha(int length)
{
    int i;
    for (i = 0; i <= length; i++)
    {
        printf("a");
    }
    printf("\n");
}
void desenho_retangulo(int length, int height)
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        printf("a");
        for (j = 1; j < length; j++)
        {
            printf("a");
        }
        printf("\n");
    }
    
}
void desenho_triangulo(int length)
{
    int i, j, larg_a;
    larg_a = length;
    for (i = 0; i < length; i++)
    {
        printf("a");
        for (j = 1; j < larg_a; j++)
        {
            printf("a");
        }
        larg_a--;
        printf("\n");
    }
}
int main()
{
    desenho_linha(4);
    desenho_retangulo(3, 5);
    desenho_triangulo(5);
    return 0;
    /*Não consegui implementar o parametro para inserir o caracter, deixei predefinido na função a letra "a", também não consegui implementar o switch case, porém todas as funcões funcionar de acordo*/
}