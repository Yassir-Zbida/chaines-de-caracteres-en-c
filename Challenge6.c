#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100], recherche;
    int count = 0, i;
    printf("Veuillez saisir une chaine de caracteres : ");
    scanf(" %[^\n]", chaine);

    printf("Veuillez saisir un caractere a rechercher : ");
    scanf(" %c", &recherche);

    for (i = 0; i < strlen(chaine); i++) {
        if (chaine[i] == recherche) {
            count++;
        }
    }

    printf("Le caractere '%c' apparait %d fois dans la mot '%s' .\n", recherche, count,chaine);

    return 0;
}
