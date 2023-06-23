#include <stdio.h>
#include <unistd.h>
struct tempo
{
    char horas;
    char minutos;
    char segundos;
};

void atualizar_relogio(struct tempo *p)
{
    p->segundos++;
    if (p->segundos==60)
    {
        p->segundos=0;
        p->minutos++;
        if (p->minutos==60)
        {
            p->minutos=0;
            p->horas++;
            if (p->horas==24)
                p->horas=0;
        }
    }
}
void mostrar_relogio(struct tempo *p)
{
    printf("%02d : %02d : %02d\n", p->horas, p->minutos, p->segundos);
}
int main()
{
    struct tempo meu_relogio;
    meu_relogio.horas=0;
    meu_relogio.minutos=0;
    meu_relogio.segundos=0;

    while (1)
    {
        sleep(1);
        atualizar_relogio(&meu_relogio);
        mostrar_relogio(&meu_relogio);
    }
    return 0;
}