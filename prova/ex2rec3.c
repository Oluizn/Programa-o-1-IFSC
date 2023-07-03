#include <stdio.h>

int num_caracteres(char *p, char *letra)
{
    int cont=0;
    while (*p!=0){
        if(*p==*letra)
            cont++;
        p++;
    }
    return cont;    
}
int main(int argc, char *argv[])
{
    for (int i = 1, j=2; i < argc; i=i+2, j=j+2){
        printf("%s\t", argv[i]);
        printf("(%s)", argv[j]);
        printf("%d\t", num_caracteres(argv[i], argv[j]));
    }
    return 0;
}