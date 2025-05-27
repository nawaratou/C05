#include <stdio.h>

int main() {
    int n1, n2;
    int tab1[100], tab2[100];
    int i, j, k;
    int inter[100]; // Pour stocker l'intersection
    int interCount = 0;
    int deja;

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

    // Trouver l'intersection
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                // Vérifier si déjà ajouté à inter[]
                deja = 0;
                for (k = 0; k < interCount; k++) {
                    if (inter[k] == tab1[i]) {
                        deja = 1;
                        break;
                    }
                }
                if (!deja) {
                    inter[interCount] = tab1[i];
                    interCount++;
                }
                break;
            }
        }
    }

    // Affichage conforme à l'exemple
    printf("Intersection :");
    for (i = 0; i < interCount; i++) {
        printf(" %d", inter[i]);
    }
    printf("\n");

    return 0;
}
