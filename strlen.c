#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = "Antonio";
    char b[100] = "Luiz";
    printf("%d\n", strlen(a));
    printf("%s", strcat(a,b));

    return 0;
}