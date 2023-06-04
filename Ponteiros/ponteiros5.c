#include <stdio.h>

int main()
{
    char x[10]="ifsc";
    char alfa='X', *p;

    p = &alfa;      // p aponta para alfa

    printf("O caracter apontador por p é %c\n", *p);

    p = &x[2];      // p aponta para o caracter que está na posição 2 do vetor

    printf("x[2] = %c\n", *p);
    p = x;

    printf("String %s\n", p);
    while (*p!=0)
    {
        printf("Endereco %p conteudo %c\n", p, *p);
        p++;
    }

    return 0;
}