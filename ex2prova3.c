#include <stdio.h>
#include <string.h>

int num_vogais(char *p)
{
    int cont=0;
    while (p!=0)
    {
        for (int i = 0; p[i]!=0; i++)
        {       
            if (p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u')
                cont++;
            p++;
        }
    }
    return cont;
}
int main(int argc, char *argv[])
{
    int contador[argc];
    if (argc>1)
        for (int i = 0; i < argc; i++)
        {
            contador[i] = num_vogais(*argv);
            argv++;
        }
    for (int i = 0; i < argc; i++)
    {
        printf("%s possui %d vogais.\n", argv++, contador[i]);
    }
    return 0;
}