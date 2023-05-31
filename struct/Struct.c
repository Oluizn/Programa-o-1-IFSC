#include <stdio.h>

int main()
{
    struct tipo_ret
    {
        float lado1, lado2;
    };
    struct tipo_ret x, y;
    float area_final;

    x.lado1 = 5.5;
    x.lado2 = 7.3;

    y.lado1 = 2.3;
    y.lado2 = 6.3;

    area_final = x.lado1*x.lado2 + y.lado1*y.lado2;

    printf("%.2f\n", area_final);

    return 0;
}