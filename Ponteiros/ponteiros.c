#include <stdio.h>
void main()
{
    int x;
    int*p;

    x=5;
    printf("Valor de x antes = %d\n", x);

    p=&x;
    *p=10;

    printf("valor de x depois = %d\n", x);
    printf("valor de endereço de p = %p\n", p);
}