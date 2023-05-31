#include <stdio.h>
#include <string.h>

void concat_inv(char str1[], char str2[])
{
    char aux[30];

    strcpy(aux, str1);
    strcpy(str1, str2);
}

int main()
{
    char alfa [10] = "SC", beta[10] = "SJ-";

    concat_inv(alfa, beta);
}