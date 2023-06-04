#include <stdio.h>

int main()
{
    int x=10;
    int y, *p, *w;
    
    p=&x;
    w=&y;
    *w=*p;

    printf("%d\n", y);
}