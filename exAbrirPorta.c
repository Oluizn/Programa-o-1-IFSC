#include <stdio.h>
#include <string.h>
#define U 10
#define H 4

int user_and_password(char TabelaUser[H][U], char TabelaPssW[H][U], char user[U], char password[U])
{
    int i;
    for (i = 0; i < H; i++)
        if (strcmp(&TabelaUser[i][0], user)==0)
            {
                if (strcmp(&TabelaPssW[i][0], password)==0)
                    return 0;
                else
                    return 2;
            }
        return 1;
}
int password_change(char TabelaUser[H][U], char TabelaPssW[H][U], char user[U], char newpassword[U])
{
    int i;
    for (i = 0; i < H; i++)
        if(strcmp(&TabelaUser[i][0], user)==0){
            strcpy(&TabelaPssW[i][0], newpassword);
            break;
        }
    if (i==H)
        printf("Usuario invalido.");
    return 0;
}
int main()
{
    char TabelaUsers[H][U] = { "joao", "maria", "josefina", "lara", }, TabelaPssW[H][U] = {"joao123", "maria123", "josef123", "lara123",}, user[U], newpassword[U];
    printf("%d\n", user_and_password(TabelaUsers, TabelaPssW, "lara", "lara123"));
    password_change(TabelaUsers, TabelaPssW, "joao", "joao321");
    return 0;
}