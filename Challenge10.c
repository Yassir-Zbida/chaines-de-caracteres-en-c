#include <stdio.h>
#include <string.h>

int main() {
    char chaine_pr[100], sc[100];

    printf("Veuillez saisir la chaine principale : ");
    scanf(" %[^\n]", chaine_pr);

    printf("Veuillez saisir la sous-chaine : ");
    scanf(" %[^\n]", sc);

    if (strstr(chaine_pr, sc) != NULL) {
        printf("La sous-chaine \"%s\" est trouvee dans la chaine principale %s.\n", sc,chaine_pr);
    } else {
        printf("La sous-chaine \"%s\" n'est pas trouvee dans la chaine principale %s.\n", sc,chaine_pr);
    }

    return 0;
}
