#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char chaine1[100];
    char chaine2[100];

    printf("Veuillez saisir la premiere chaine : ");
    scanf(" %[^\n]", chaine1);
    printf("Veuillez saisir la deuxieme chaine : ");
    scanf(" %[^\n]", chaine2);
    if (strcmp(chaine1, chaine2) == 0) {
        printf("Les chaines sont egales.\n");
    } else {
        printf("Les chaines sont differentes.\n");
    }
    return 0;
}
