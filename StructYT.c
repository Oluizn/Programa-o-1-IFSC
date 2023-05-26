#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM];
};
typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    tipo_pessoa pes = {0, 0.0, "teste"};

    printf("%d\t", pes.idade);
    printf("%.2f\t", pes.peso);
    printf("%s\n", pes.nome);

    pes.idade = 24;
    pes.peso = 90;
    strcpy(pes.nome, "Luiz");

    printf("%d\t", pes.idade);
    printf("%.2f\t", pes.peso);
    printf("%s\n", pes.nome);

    printf("Insira a sua idade: ");
    scanf("%d", &pes.idade);
    printf("Insira seu peso: ");
    scanf("%f", &pes.peso);
    printf("Insira seu nome: ");
    scanf("%s", &pes.nome);

    printf("%d\t", pes.idade);
    printf("%.2f\t", pes.peso);
    printf("%s\n", pes.nome);

    return 0;
}