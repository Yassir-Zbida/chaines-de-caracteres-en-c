#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    int i;

    printf("Veuillez saisir une chaine de caracteres : ");
    scanf(" %[^\n]", chaine);

    for (i = 0; i < strlen(chaine); i++) {
        if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
            chaine[i] = chaine[i] - ('A' - 'a');
        }
    }

    printf("La chaine en majuscules est : %s\n", chaine);

    return 0;
}
