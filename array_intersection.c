#include <stdio.h>

int main() {
    int n1, n2;
    int tab1[100], tab2[100];
    int i, j, k;
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

    printf("Intersection :");

    // Vérifier les éléments communs
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                // Vérifie si déjà affiché
                deja = 0;
                for (k = 0; k < i; k++) {
                    if (tab1[k] == tab1[i]) {
                        deja = 1;
                        break;
                    }
                }
                if (!deja) {
                    printf(" %d", tab1[i]);
                }
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
