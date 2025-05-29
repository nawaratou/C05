#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // taille premier tableau
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m); // taille deuxième tableau
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // On va afficher tous les éléments dans une variable temporaire,
    // puis on affiche le label et ensuite les éléments.

    // Pour rester simple, on affiche directement dans la boucle,
    // mais on garde le label après.

    // Solution simple : on garde les éléments trouvés dans res[].

    int res[n + m]; // grand tableau temporaire, suffisant pour tout stocker
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                // On évite les doublons dans res
                int exist = 0;
                for (int x = 0; x < k; x++) {
                    if (res[x] == a[i]) {
                        exist = 1;
                        break;
                    }
                }
                if (!exist) {
                    res[k++] = a[i];
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
