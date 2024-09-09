#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char Nom [100];
    printf("Veuillez saisir Votre Nom :");
    scanf(" %[^\n]",Nom);
    char Prenom[100];
    printf("Veuillez saisir Votre Prenom :");
    scanf(" %[^\n]",Prenom);
    strcat(Nom,Prenom);


    printf("Votre Nom Complet : %s",Nom);
    return 0;
}
