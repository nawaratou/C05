#include <stdio.h>
#include <stdbool.h>

// Fonction pour vérifier si un élément est déjà présent dans le tableau résultat
bool estDejaPresent(int tab[], int taille, int element) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int n1, n2;

    // Lecture de la taille du premier tableau
    scanf("%d", &n1);
    int tab1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lecture de la taille du second tableau
    scanf("%d", &n2);
    int tab2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    int intersection[n1 < n2 ? n1 : n2]; // Taille max possible de l'intersection
    int k = 0; // Compteur pour l'intersection

    // Parcours croisé pour trouver les éléments communs
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                // Vérifier que ce n'est pas déjà dans le tableau résultat
                if (!estDejaPresent(intersection, k, tab1[i])) {
                    intersection[k++] = tab1[i];
                }
            }
        }
    }

    // Affichage du résultat
    printf("Intersection :");
    for (int i = 0; i < k; i++) {
        printf(" %d", intersection[i]);
    }
    printf("\n");

    return 0;
}
