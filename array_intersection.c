#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[100], arr2[100];

    // Lire la taille du 1er tableau
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Lire la taille du 2e tableau
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Affichage de l'en-tête
    printf("Intersection :");

    for (int i = 0; i < n1; i++) {
        int is_duplicate = 0;

        // Vérifier si arr1[i] a déjà été considéré (pour éviter les doublons)
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate) continue;

        // Vérifier si arr1[i] est présent dans arr2
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf(" %d", arr1[i]); // Affichage avec espace *avant* le chiffre
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
