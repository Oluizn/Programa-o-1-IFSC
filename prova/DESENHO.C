#include <stdio.h>

int retangulo (int largura)
{
    int i, j, larg_a;
    larg_a = largura;
    for (i = 0; i < largura + 1; i++)
    {
        for (j = 0; j < largura; j++)
        {
            if (j < larg_a)
                printf("a");
            else
                printf("b");
        }
        larg_a--;
        printf("\n");
    }
    
}
int triangulo (int largura)
{
    int i, j;
    for (j = 0; j < largura + 1; j++)
    {
        for (i = 0; i < j; i++)
        {
            printf("a");
        }
        printf("\n");
    }
}
int main()
{
    int opcao, lado;
    printf("entre com a opcao 1 para retangulo e 2 para triangulo: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1: 
        printf("Entre com o lado do retangulo");
        scanf("%d", &lado);
        retangulo(lado);
        break;
    case 2: 
        printf("Entre com o lado do triangulo");
        scanf("%d", &lado);
        triangulo(lado);
    default:
        break;
    }
    return 0;
}