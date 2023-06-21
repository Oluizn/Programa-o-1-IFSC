#include <stdio.h>
struct tcomplexo
{
  float x, y;
};

struct tcomplexo *ler_complexo()
{
    struct tcomplexo aux;
    scanf("%f", &aux.x);
    scanf("%f", &aux.y);
    return &aux;
}

int main()
{
    struct tcomplexo *comp1;
    comp1 = ler_complexo(); // isso leva a segment fault, após a função ser chamada, como aux é uma varável local, a memória é perdida
                            // ao tentar retornar um ponteiro para uma struct local, não será possível acessa-la dps da execução da função

}
// ERRADO.
