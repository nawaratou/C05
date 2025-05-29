#include <stdio.h>

int main() {
    int n, m;

    // Lecture du tableau A
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Lecture du tableau B
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    printf("Intersection :");
    for (int i = 0; i < n; i++) {
        // Vérifier si a[i] a déjà été traité (éviter les doublons)
        int deja_traite = 0;
        for (int k = 0; k < i; k++) {
            if (a[k] == a[i]) {
                deja_traite = 1;
                break;
            }
        }
        if (deja_traite) continue;

        // Vérifier si a[i] est dans B
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                printf(" %d", a[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}