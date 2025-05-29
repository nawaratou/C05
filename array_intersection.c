#include <stdio.h>

int main() {
    int n; // Taille du premier tableau
    scanf("%d", &n);

    int a[100]; // Premier tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int m; // Taille du deuxième tableau
    scanf("%d", &m);

    int b[100]; // Deuxième tableau
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int res[100]; // Tableau pour stocker l’intersection
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                int existe = 0;
                for (int x = 0; x < k; x++) {
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

    printf("Intersection :");
    for (int i = 0; i < k; i++) {
        printf(" %d", res[i]);
    }
    printf("\n");

    return 0;
}
