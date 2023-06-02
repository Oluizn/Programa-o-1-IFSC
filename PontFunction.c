#include <stdio.h>

void str_cpy(char *pdest, char *psrc)
{
    while (*psrc!=0)
        *pdest++ = *psrc++;
    *pdest=0;
}

int str_len(char *p)
{
    int i=0;
    while (*p++!=0)
        i++;
    return i;
}
void str_cap(char *p)
{
    while (*p!=0){
        if (*p >= 'a' && *p <= 'z')
            *p=*p-32;
        p++;
    }
    /*De acordo com a tabela ASCI, as letras captalizadas possuem o msm valor +32.*/
}
int main()
{
    char fonte[10]="ifsc-SC";
    char destino[10];
    str_cpy(destino, fonte);
    str_cap(fonte);
    printf("%s\n", fonte);
    printf("%s\n", destino);
    printf("%d\n", str_len(fonte));
    return 0;
}