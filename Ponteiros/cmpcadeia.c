#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc==3){
        if(strcmp(argv[1], argv[2])==0)
            printf("As palavras sao iguals\n");
        else
            printf("As palavras sao diferentes\n");
    }
    else
        printf("Número inválido de argumentos\n");
        return -1;

return 0;
}