#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    double a, b, r;
    a = atof(argv[1]);
    b = atof(argv[3]);
    if(argc==4){
        if (strcmp(argv[2], "+")==0)
        {
            r = a+b;
        }
        else if (strcmp(argv[2], "-")==0)
        {
            r = a-b;
        }
        else if (strcmp(argv[2], "x")==0)
        {
            r = a*b;
        }
        else if (strcmp(argv[2], "/")==0)
        {
            r = a/b;
        }
        printf("%.2f", r);
        return 0;
    }    
    else
        printf("Parametros invalidos\n");
    return -1;
}