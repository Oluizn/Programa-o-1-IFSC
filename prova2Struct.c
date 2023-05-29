#include <stdio.h>
#include <string.h>

struct acesso
{
    char nome[10], senha[10], direito[3]; 
};
int procurar_usuario(struct acesso x, char usuario[])
{
    for (int i = 0; i < 3; i++)
    {
        if(strcmp(&x[i].nome, usuario)==0);
    }
    return -1;
}

int main()
{
    struct acesso tabelaUsuario[3] = {{"eraldo", "beta", "rw"},{"silvana", "alfa", "r"},{"vica", "delta", "w"}};
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", tabelaUsuario[i].nome);
        printf("%s\n", tabelaUsuario[i].senha);
        printf("%s\n", tabelaUsuario[i].direito);
    }
    return 0;
}