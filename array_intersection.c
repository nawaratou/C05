#include <stdio.h>

int main() {
    int n1, n2, i, j, k;
    int tab1[100], tab2[100], inter[100];
    int interSize = 0;
    int deja;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    // Rechercher les éléments communs
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                // Vérifier si l'élément est déjà dans inter[]
                deja = 0;
                for (k = 0; k < interSize; k++) {
                    if (inter[k] == tab1[i]) {
                        deja = 1;
                        break;
                    }
                }
                if (!deja) {
                    inter[interSize] = tab1[i];
                    interSize++;
                }
                break;
            }
        }
    }

    // Affichage
    printf("Intersection :");
    for (i = 0; i < interSize; i++) {
        printf(" %d", inter[i]);
    }
    printf("\n");

    return 0;
}
