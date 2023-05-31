#include <stdio.h>

int main()
{
    int x, y, w, *p1, *p2, *p3;
    x = 20;
    w = 30;
    p1=&x;
    p2=&w;
    y = *p1 + w;
    p3=&y;
    *p3=*p3+10;
    y = *p1 + *p2 + *p3;

    printf("%d\n", y);

    return 0;
}