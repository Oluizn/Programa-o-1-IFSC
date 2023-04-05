#include <stdio.h>
void desenho_retangulo (int largura)
{
    int i, j, larg_a;
    larg_a= largura;

    for (i = 0; i < largura + 1; i++)
    {
        for ( j = 0; j < largura; j++)
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
int desenho_triangulo(int altura)
{
    int i, j;
    for (i = altura; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("a");
        }
        printf("\n");
    }    
}
int main()
{
    int opcao, lado;
    printf("Entre coma opção desejada: \n");
    printf("1: para desenhar retângulo\n");
    printf("2: para desenhar triângulo\n");
    printf("3: para encerrar\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1: printf("Entre com o lado do retângulo\n");
        scanf("%d", &lado);
        desenho_retangulo(lado);
        break;
    case 2: printf("Entre com o lado do triângulo\n");
        scanf("%d", &lado);
        desenho_triangulo(lado);
        break;
    default:
        break;
    }
    /*desenho_triangulo(4);
    desenho_retangulo(5);*/
    return 0;
}