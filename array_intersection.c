#include <stdio.h>

#define MAX_SIZE 100

// Vérifie si une valeur est déjà présente dans un tableau
int existe_deja(int tab[], int taille, int valeur) {
    int i;
    for (i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n1, n2;
    int tab1[MAX_SIZE], tab2[MAX_SIZE];
    int inter[MAX_SIZE];
    int i, j, k = 0;

    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    // Comparaison croisée pour trouver l'intersection sans doublons
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                if (!existe_deja(inter, k, tab1[i])) {
                    inter[k++] = tab1[i];
                }
                break;
            }
        }
    }

    // Affichage du résultat sans espace final
    printf("Intersection :");
    for (i = 0; i < k; i++) {
        printf(" %d", inter[i]);
    }
    printf("\n");

    return 0;
}
