#include <stdio.h>

void desenho_linha(int length, char caracter[2])
{
    int i;
    for (i = 0; i <= length; i++)
    {
        printf("%s", caracter);
    }
    printf("\n");
}
void desenho_retangulo(int length, int height, char caracter[2])
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        printf("%s", caracter);
        for (j = 1; j < length; j++)
        {
            printf("%s", caracter);
        }
        printf("\n");
    }
    
}
void desenho_triangulo(int length, char caracter[2])
{
    int i, j, larg_a;
    larg_a = length;
    for (i = 0; i < length; i++)
    {
        printf("%s", caracter);
        for (j = 1; j < larg_a; j++)
        {
            printf("%s", caracter);
        }
        larg_a--;
        printf("\n");
    }
}
int main()
{
    
    int opcao, length, height;
    char caracter[2];
    printf("Entre coma opção desejada: \n");
    printf("1: para desenhar linha\n");
    printf("2: para desenhar retangulo\n");
    printf("3: para desenhar triangulo\n");
    printf("4: para encerrar.\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1: printf("Insira a quantidade de caracteres: ");
            scanf("%d", &length);
            printf("Insira qual caracter deseja que componha a figura: ");
            scanf("%s", &caracter);
            desenho_linha(length, caracter);
        break;
    case 2: printf("insira o comprimento: ");
            scanf("%d", &length);
            printf("Insira a altura do retangulo: ");
            scanf("%d", &height);
            printf("Insira qual caracter deseja que componha a figura: ");
            scanf("%s", &caracter);
            desenho_retangulo(length, height, caracter);
        break;
    case 3: printf("insira o comprimento e a altura do triangulo: ");
            scanf("%d", &length);
            printf("Insira qual caracter deseja que componha a figura: ");
            scanf("%s", &caracter);
            desenho_triangulo(length, caracter);
        break;
    default:
        break;
    }
    
    return 0;
    /*Não consegui implementar o parametro para inserir o caracter, deixei predefinido na função a letra "a", também não consegui implementar o switch case, porém todas as funcões funcionar de acordo*/
}