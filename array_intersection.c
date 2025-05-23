#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);  // Taille du 1er tableau
    int tab1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    scanf("%d", &n2);  // Taille du 2e tableau
    int tab2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    printf("Intersection : ");
    for (int i = 0; i < n1; i++) {
        int commun = 0;

        // Vérifier si l'élément tab1[i] est dans tab2
        for (int j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                commun = 1;
                break;
            }
        }

        // Vérifier qu’il n’est pas déjà affiché
        int deja_affiche = 0;
        for (int k = 0; k < i; k++) {
            if (tab1[i] == tab1[k]) {
                deja_affiche = 1;
                break;
            }
        }

        if (commun && !deja_affiche) {
            printf("%d ", tab1[i]);
        }
    }
    printf("\n");

    return 0;
}
