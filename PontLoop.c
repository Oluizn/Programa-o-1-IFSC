#include <stdio.h>
int main()
{
    int x[10]={0,1,2,3,4,5,6,7,8,9}, *p, i;
    p = x;
    for (i = 0; i < 10; i++, p++)
        printf("Endereço %p e conteúdo %d\n", p, *p);
    return 0;
}