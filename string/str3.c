#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char s[N];
    int i;
    gets(s);
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressao de posicao a posicao:\n");
    for (i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    
    return 0;
}