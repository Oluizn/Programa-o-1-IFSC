#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#define PI 3.14159265359

struct tipo_numComplex_ret
    {
        float real, img;
    };
struct tipo_numComplex_polar
    { 
        float mod, ang;
    };

float modulo(struct tipo_numComplex_ret x)
{
    float mod;
    mod = pow(x.real, 2) + pow(x.img, 2);
    return sqrtf(mod);
}
float angulo(struct tipo_numComplex_ret x)
{
    float arctan;
    arctan = atan2(x.real, x.img);
    return arctan*180/PI;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct tipo_numComplex_ret num1 = {2, 2};
    printf("O modulo é %.2f\n", modulo(num1));
    printf("O angulo é %.2f graus", angulo(num1));
    return 0;
    // compilar com -lm no final para biblioteca matematica
}
