#include <stdio.h>
#include <string.h>
char TabelaUsuarios[9][10] = {
"eraldo",
"delta",
"rw",
"silvana",
"alfa",
"r",
"vica",
"beta",
"w"
};
int procurar_usuario(char tabela[9][10], char usuario[])
{
    for (int i = 0; i < 7; i=i+3)
        if(strcmp(&tabela[i][0], usuario)==0)
            return i+1;
    return -1;
}
int modificar_senha(char tabela[9][10], char usuario[], char senha_antiga[], char senha_nova[])
{
    int aux;
    aux=procurar_usuario(tabela, usuario);
    if (aux==-1)
        return -1;
    else
        if (strcmp(&tabela[aux][0], senha_antiga)==0){
            strcpy(&tabela[aux][0], senha_nova);
            return 0;}
    return -2;
}
int usuario_com_direito_leitura(char tabela[9][10])
{
    int cont=0;
    for (int i = 0; i < 9; i++)
        if (tabela[i][0]=='r')
            cont++;
    return cont;
}
void printar_tabela(char tabela[9][10])
{
    for (int i = 0; i < 9; i++)
        printf("%s\n", &tabela[i][0]);
}
int main()
{
    printf("O usuário está na posiçao %d da tabela\n", procurar_usuario(TabelaUsuarios, "eraldo"));
    printf("Retorno %d, usuário não escontrado\n", procurar_usuario(TabelaUsuarios, "luiz"));
    printf("%d\t", modificar_senha(TabelaUsuarios, "eraldo", "delta", "omega"));
    printf("%d\t", modificar_senha(TabelaUsuarios, "Luiz", "delta", "omega"));
    printf("%d\t\n", modificar_senha(TabelaUsuarios, "eraldo", "beta", "omega"));
    modificar_senha(TabelaUsuarios, "silvana", "alfa", "delta");
    modificar_senha(TabelaUsuarios, "vica", "beta", "alfa");
    printf("Tabela com senhas alteradas\n");
    printar_tabela(TabelaUsuarios);
    printf("%d pessoas tem direito a leitura\n", usuario_com_direito_leitura(TabelaUsuarios));
    return 0;
}