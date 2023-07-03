#include <stdio.h>
#include <string.h>
#define TAM_ID 10
#define TAM_NOME 30
#define TAM_TAB 5
typedef struct {
        int itemID;
        char descricao[60];
        int quantidade;
        float preco_unitario;
    } tipo_item;
tipo_item estoque_pecas[TAM_TAB] = {
        {355, "Coxim Lado Direito Motor", 15, 250.50},
        {850, "Coxim Lado Esquerdo Motor", 0, 700.00},
        {135, "Correia Dentada", 27, 85.00},
        {177, "Tensor Correia", 121, 55.50},
        {57, "Bomba de Agua", 0, 100.70}
    };
tipo_item *retorna_item(tipo_item *ptab, int tam, int item)
{
    for (int i = 0; i < tam; i++, ptab++)
        if (ptab->itemID==item)
            return ptab;
    return NULL;
}
int total_itens (tipo_item *ptab, int tam, int item)
{
    tipo_item *ptotal = retorna_item(ptab, tam, item);
    if (ptotal!=NULL)
        return ptotal->quantidade;
    else
        return -1;    
}
float total_valor_estoque(tipo_item *ptab, int tam)
{
    float valor=0;
    for (int i = 0; i < tam; i++)
        valor+=total_itens(ptab, tam, ptab[i].itemID) * ptab[i].preco_unitario;
    return valor;
}
char *descricao_item(tipo_item *ptab, int tam, int item)
{
    tipo_item *pdescricao = retorna_item(ptab, tam, item);
    if(pdescricao!=NULL)
        return pdescricao->descricao;
    else
        return NULL;
}
int main()
{
    printf("%p\t", retorna_item(estoque_pecas, TAM_TAB, 355)); // Não sei como o professor quer que eu represente esta função no terminal, por isso estou printando o ponteiro, usando %s ele printa somente a primeira letra da string
    printf("%p\t", retorna_item(estoque_pecas, TAM_TAB, 850));
    printf("%p\t", retorna_item(estoque_pecas, TAM_TAB, 135));
    printf("%p\t", retorna_item(estoque_pecas, TAM_TAB, 177));
    printf("%p\t", retorna_item(estoque_pecas, TAM_TAB, 57));
    printf("%p\n", retorna_item(estoque_pecas, TAM_TAB, 423)); // deve retornar NULL
    printf("%d\t", total_itens(estoque_pecas, TAM_TAB, 355));
    printf("%d\t", total_itens(estoque_pecas, TAM_TAB, 850));
    printf("%d\t", total_itens(estoque_pecas, TAM_TAB, 135));
    printf("%d\t", total_itens(estoque_pecas, TAM_TAB, 177));
    printf("%d\t", total_itens(estoque_pecas, TAM_TAB, 57));
    printf("%d\n", total_itens(estoque_pecas, TAM_TAB, 423)); // deve retornar -1
    printf("%.2f\n", total_valor_estoque(estoque_pecas, TAM_TAB));
    printf("%s\n", descricao_item(estoque_pecas, TAM_TAB, 355));
    printf("%s\n", descricao_item(estoque_pecas, TAM_TAB, 850));
    printf("%s\n", descricao_item(estoque_pecas, TAM_TAB, 135));
    printf("%s\n", descricao_item(estoque_pecas, TAM_TAB, 177));
    printf("%s\n", descricao_item(estoque_pecas, TAM_TAB, 57));
    printf("%p\n", descricao_item(estoque_pecas, TAM_TAB, 423)); // Programa roda normalmente porém com %s no printf estava dando segmentation fault, com %p isso nao ocorre.
}