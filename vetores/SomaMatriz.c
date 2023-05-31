#include <stdio.h>

void soma_matriz(int mA[2][3], int mB[2][3], int mC[2][3])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mC[i][j]=mA[i][j]+mB[i][j];
        }
    }
    return;
}

int main()
{
    int mA[2][3] = {11, 12, 13, 21, 22, 23},
        mB[2][3] = {1, 2, 3, 1, 2, 3},
        mC[2][3];
    soma_matriz(mA, mB, mC);

    return 0;
}