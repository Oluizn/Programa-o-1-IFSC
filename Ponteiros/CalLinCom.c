#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a, b, r;
    a = atof(argv[1]);
    b = atof(argv[3]);

    if(argc==4){
        if(strcmp(argv[2], "+")==0)
            r = a+b;
        else if(strcmp(argv[2], "-")==0)
            r = a-b;
        else if(strcmp(argv[2], "x")==0)
            r = a * b;
        else if(strcmp(argv[2], "/")==0)
            r = a/b;
        printf("%.2f\n", r);
        return 0;
    }
    else
        printf("Parâmetros incorrestos.\n");
    return -1;
}