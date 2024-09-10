#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    int i;

    printf("Veuillez saisir une chaine de caracteres : ");
    scanf(" %[^\n]", chaine);

    for (i = 0; i < strlen(chaine); i++) {
        if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = chaine[i] - ('a' - 'A');
        }
    }

    printf("La chaine en majuscules est : %s\n", chaine);

    return 0;
}
