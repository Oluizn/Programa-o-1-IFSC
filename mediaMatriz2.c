#include <stdio.h>

int mediaMatriz(int mat[5][5], int k)
{
    int i, j, soma = 0, result=0, aux = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            soma +=mat[i][j];
        }      
    }
    for (i = 0; i < 5; i++)
    {
        if(mat[k][i]>soma/25)
        {
            result +=mat[k][i];
            aux++;
        }
    }
    return result/aux;
}
int main()
{
    int mat[5][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    printf("%d", mediaMatriz(mat, 0));

    return 0;
}