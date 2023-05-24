#include <stdio.h>
#include <string.h>


int mult_matriz(int mat1[3][3], int mat2[3][3], int matR[3][3], int r, int c)
{
    int i, j, k;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            matR[i][j]=0;
            for (k = 0; k < r; k++)
            {
                matR[i][j] +=mat1[i][k]*mat2[k][j];
            }
        }
    }
        for(i=0;i<r;i++)    
        {    
            for(j=0;j<c;j++)    
            {    
                printf("%d\t",matR[i][j]);    
            }    
        printf("\n");    
        }
    return 0;
}

int main()
{
    int matA[3][3]={{1,1,1},{2,2,2},{3,3,3}}, matB[3][3]={{1,1,1},{2,2,2},{3,3,3}}, matR[3][3];
    mult_matriz(matA, matB, matR, 3, 3);
    return 0;
}