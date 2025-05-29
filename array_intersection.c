#include <stdio.h>

int main() {
    int n;
    int m;
    int a[100];
    int b[100];
    int res[100];
    int i;
    int j;
    int k;
    int x;
    int existe;

    k = 0;

    // Lire la taille du premier tableau
    scanf("%d", &n);

    // Lire les éléments du premier tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &m);

    // Lire les éléments du deuxième tableau
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Comparaison des deux tableaux
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                existe = 0;
                for (x = 0; x < k; x++) {
                    if (res[x] == a[i]) {
                        existe = 1;
                        break;
                    }
                }
                if (existe == 0) {
                    res[k] = a[i];
                    k++;
                }
                break;
            }
        }
    }

    // Affichage
    printf("Intersection :");
    for (i = 0; i < k; i++) {
        printf(" %d", res[i]);
    }
    printf("\n");

    return 0;
}
