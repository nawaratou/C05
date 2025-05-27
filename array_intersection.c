#include <stdio.h>

int main() {
    int n1, n2;
    int tab1[100], tab2[100], i, j;

    // Lire la taille et les éléments du premier tableau
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lire la taille et les éléments du deuxième tableau
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    // Affichage de l'intersection
    printf("Intersection :");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                // Vérifie si c’est déjà affiché
                int deja_affiche = 0;
                int k;
                for (k = 0; k < i; k++) {
                    if (tab1[k] == tab1[i]) {
                        deja_affiche = 1;
                        break;
                    }
                }
                if (!deja_affiche) {
                    printf(" %d", tab1[i]);
                }
                break; // On passe à l’élément suivant de tab1
            }
        }
    }

    printf("\n");
    return 0;
}
