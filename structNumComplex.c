#include <stdio.h>
#include <string.h>
#include <math.h>

struct tipo_numComplex_ret
    {
        float real, img;
    };
struct tipo_numComplex_polar
    { 
        float mod, ang;
    };

float modulo_complexo(struct tipo_numComplex_ret x)
{
    float mod;
    mod = pow(x.img, 2) + pow(x.real, 2);

    return sqrtf(mod);
}
float convert_retPolar (struct tipo_numComplex_ret x)
{
    struct tipo_numComplex_ret num1;
    float mod, ang;
    mod = modulo_complexo(num1);
    ang = x.img/x.real;
}

int main()
{
    struct tipo_numComplex_ret num1 = {2, 2};
    float mod;
    mod = modulo_complexo(num1);

    printf("%.2f\n", mod);

    return 0;
    // compilar com -lm no final para biblioteca matematica
}
