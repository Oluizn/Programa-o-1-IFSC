/*Antonio Luiz Neto*/
#include <stdio.h>

int fatorial (int x)
{
    int fat = 1, i;
    for (i = x; i > 1; i--)
    {
        fat = fat*i;
    }
    return fat;
}
int valor_fx(int x)
{
    int f;
    if (x >=0 && x <=10)
        f = 2*fatorial(x) - 5;
    else if (x < 0)
        f = -1;
    else
        f = 0;
    
    return f;
}
int print__fx(int xsup, int xinf)
{
    int i;
    printf("x   f(x)\n");
    for (i = xsup; i >= xinf; i--)
    {
        printf("%d   %d\n", i, valor_fx(i));
    }
    return 0;
}
int main ()
{
    printf("%d\n", valor_fx(3));
    printf("%d\n\n", fatorial(1));
    print__fx(3,1);
    return 0;
}