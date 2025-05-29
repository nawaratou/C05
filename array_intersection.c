#include <stdio.h>

// Fonction pour trouver l'intersection entre deux tableaux
void intersection(int a[], int n1, int b[], int n2, int res[], int *res_size) {
    *res_size = 0; // Initialiser la taille du résultat à 0

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                // Vérifier si a[i] est déjà dans res[]
                int found = 0;
                for (int k = 0; k < *res_size; k++) {
                    if (res[k] == a[i]) {
                        found = 1;
                        break;
                    }
                }
                // Si non trouvé, l'ajouter dans res[]
                if (!found) {
                    res[(*res_size)++] = a[i];
                }
            }
        }
    }
}

int main() {
    int n1, n2;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];

    // Lire les éléments du premier tableau
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Lire la taille du second tableau
    scanf("%d", &n2);
    int b[n2];

    // Lire les éléments du second tableau
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int res[n1 < n2 ? n1 : n2]; // La taille max de l'intersection = min(n1, n2)
    int res_size = 0;

    // Calculer l'intersection
    intersection(a, n1, b, n2, res, &res_size);

    // Affichage du résultat
    printf("Intersection :");
    for (int i = 0; i < res_size; i++) {
        printf(" %d", res[i]);
    }
    printf("\n");

    return 0;
}
