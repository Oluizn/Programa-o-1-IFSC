#include <stdio.h>
#include <string.h>


int mult_matriz(int mat1[2][2], int mat2[2][3], int matR[2][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        matR[0][i]=mat1[0][0]*mat2[0][i]+mat1[0][1]*mat2[1][i];
            for (j = 0; j < 3; j++)
            {
                matR[1][j]=mat1[1][0]*mat2[0][j]+mat1[1][0]*mat2[1][j];
            }
    }
    
}
int print_tabela(int tabela[2][3])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d,\n", &tabela[i][i]);
    }
}
int main()
{
    int matA[2][2]={{3,2},{5,-1}}, matB[2][3]={{6,5,-2},{0,7,1}}, matR[2][3];
    mult_matriz(matA, matB, matR);
    print_tabela(matR);
    return 0;
}