#include <stdio.h>

#define MAX 100

int main() {
    int n, m;
    int tab1[MAX], tab2[MAX];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);
    }

    printf("Intersection :");
    for (int i = 0; i < n; i++) {
        // Vérifier si tab1[i] a déjà été affiché
        int deja_affiche = 0;
        for (int k = 0; k < i; k++) {
            if (tab1[i] == tab1[k]) {
                deja_affiche = 1;
                break;
            }
        }
        if (deja_affiche) continue;

        // Vérifier si tab1[i] existe dans tab2
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                printf(" %d", tab1[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
