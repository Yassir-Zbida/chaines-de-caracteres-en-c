#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100], result[100];
    int i, j = 0;

    printf("Veuillez saisir une chaine de caracteres : ");
    scanf(" %[^\n]", chaine);

    for (i = 0; i < strlen(chaine); i++) {
        if (chaine[i] != ' ') {
            result[j] = chaine[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("La chaine sans espaces est : %s\n", result);

    return 0;
}
