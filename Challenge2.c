#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char chaine [100];
    printf("Veuillez saisir Votre Nom :");
    scanf("%[^\n]",chaine);

    printf("Longueur de Votre Nom : %d",strlen(chaine));
    return 0;
}
