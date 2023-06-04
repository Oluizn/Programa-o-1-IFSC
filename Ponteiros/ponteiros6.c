#include <stdio.h>
int main()
{
    char x[10]="ifsc";
    char *p, y;

    p=x+2;
    y=*p;
    printf("%c\n", y);

    return 0;
}