#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 3

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    tipo_pessoa lista[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Insira os dados %d:\n", i+1);
        puts("nome: ");
        scanf("%s", &lista[i].nome);
        fflush(stdin);

        puts("idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }

    puts("Seus dados:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("Pessoa %d", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    
}
