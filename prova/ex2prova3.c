#include <stdio.h>
#include <string.h>

int num_vogais(char *p)
{
    int cont=0;
    while (*p!=0)
    {     
        if (*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' || *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
            cont++;
        p++;
    }
    return cont;
}
int main(int argc, char *argv[])
{
    int vogal;
    for (int i = 1; i < argc; i++)
    {
        vogal = num_vogais(argv[i]);
        printf("%s possui %d vogais\n", argv[i], vogal);
    }
    return 0;
}