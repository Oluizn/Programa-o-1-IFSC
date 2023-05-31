#include <stdio.h>
#include <string.h>

struct acesso
{
    char nome[10], senha[10], direito[3]; 
};
int search_userID(struct acesso x[3], char userID[10])
{
    for (int i = 0; i < 3; i++)
        if (strcmp(x[i].nome, userID)==0)
            return i+1;
    return -1;
}
void change_password(char userID[10], char newpassword[10])
{
    int aux;
    struct acesso x[3];
    aux=search_userID(x.nome, userID);
    if(aux!=-1)
        strcpy(x[aux].senha, newpassword);
}

void print_tabela(struct acesso x[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%s\t", x[i].nome);
        printf("%s\t", x[i].senha);
        printf("%s\n", x[i].direito);
    }
}
int main()
{
    struct acesso tabelaUsuario[3] = {{"eraldo", "beta", "rw"},{"silvana", "alfa", "r"},{"vica", "delta", "w"}};
    printf("%d\n", search_userID(tabelaUsuario, "eraldo"));
    print_tabela(tabelaUsuario);
    change_password(tabelaUsuario, "eraldo", "omega");
    print_tabela(tabelaUsuario);
    
    return 0;
}