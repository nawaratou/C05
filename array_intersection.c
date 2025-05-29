#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int)); // allocation dynamique pour le 1er tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);

    int *b = malloc(m * sizeof(int)); // allocation dynamique pour le 2ème tableau
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int *res = malloc((n < m ? n : m) * sizeof(int)); // max taille de l'intersection
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                int exist = 0;
                for (int x = 0; x < k; x++) {
                    if (res[x] == a[i]) {
                        exist = 1;
                        break;
                    }
                }
                if (!exist) {
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

    // Libération de la mémoire
    free(a);
    free(b);
    free(res);

    return 0;
}
