#include <stdio.h>

int funcao(int x)
{
    int f;
    if (x >= 10)
        f = 5*(x*x) + 3;
    else if (x > 5 && x < 10)
        f = x;
    else
        f = -3*(x*x) -1;
    return f;
}

int funcao_menor(int maior, int menor)
{
    int i, f, j;
    j = funcao(menor);
    for (i = menor; i <= maior; i++)
    {
        f = funcao(i);
        if (f < j)
            j = f;
    }
    return j;
}
int main()
{
    printf("%d\n", funcao(2));
    printf("%d\n", funcao_menor(15, 0));
}