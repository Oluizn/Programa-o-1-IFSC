#include <stdio.h>

int mediaMatrix(int mat[2][3])
{
    int i, j, soma;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma += mat[i][j];
        }
        
    }
    return soma/6;
}
int main()
{
    int mat[2][3] = {{1,2,3},{4,5,6}};
    printf("%d", mediaMatrix(mat));
    return 0;
}