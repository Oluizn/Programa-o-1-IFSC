#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double x[3], r;
    char operador;;
    for (int i = 1; i < argc; i=i+2)
        x[i]=atof(argv[i]);
    if (argc==4)
    {
        if (strcmp(argv[2], "+")==0)
            r = x[1] + x[3];
        else if (strcmp(argv[2], "-")==0)
            r = x[1] - x[3];
        else if (strcmp(argv[2], "/")==0)
            r = x[1] / x[3];
        else if (strcmp(argv[2], "*")==0)
            r = x[1] * x[3];
    }
    else
        printf("Parametros incorretos");
        return -1;
    printf("Resultado %.2f\n", r);
    return 0;
}