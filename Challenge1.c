#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine [100];
    printf("Veuillez saisir Votre Nom :");
    scanf("%[^\n]",chaine);
    printf("Nome : %s",chaine);
    return 0;
}
