#include <stdio.h>

int inverte_e_compara(int vet_original[], int vet_invertido[], int tam)
{
    int cont=0;
    for (int i = 0, j = tam-1; i < tam; i++, j--)
        vet_invertido[j]=vet_original[i];
    for (int i = 0; i < tam; i++)
        if (vet_invertido[i]==vet_original[i])
            cont++;
    if (cont==tam)
        return 1;    
    else
        return -1;
}
void printar_vetor(int vetor[], int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%d\t", vetor[i]);    
}
int main()
{
    int vet1[3]={1,2,3},
        vet2[3]={4,5,6},
        vet3[3]={7,7,7},
        vet4[6]={3,7,11,13,19,23},
        vetInver[3],
        retorno;
    retorno=inverte_e_compara(vet1, vetInver, 3);
    printar_vetor(vetInver, 3);
    printf("Vetor 1 invertido, retorno da função %d\n", retorno);
    retorno=inverte_e_compara(vet2, vetInver, 3);
    printar_vetor(vetInver, 3);
    printf("Vetor 2 invertido, retorno da função %d\n", retorno);
    retorno=inverte_e_compara(vet3, vetInver, 3);
    printar_vetor(vetInver, 3);
    printf("Vetor 3 invertido, retorno da função %d\n", retorno);
    retorno=inverte_e_compara(vet4, vetInver, 6);
    printar_vetor(vetInver, 6);
    printf("Vetor 4 invertido, retorno da função %d\n", retorno);
    return 0;
}