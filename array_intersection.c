#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[100], arr2[100];

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection :");

    int first_printed = 1;  // Variable pour gérer l'espace avant les nombres

    // Parcourir arr1
    for (int i = 0; i < n1; i++) {
        int is_duplicate = 0;

        // Vérifier si arr1[i] a déjà été imprimé pour éviter doublons
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate)
            continue;  // Passer à l'élément suivant

        // Chercher arr1[i] dans arr2
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                if (first_printed) {
                    // Premier élément : pas d'espace avant
                    printf(" %d", arr1[i]); 
                    first_printed = 0;
                } else {
                    // Autres éléments : espace avant
                    printf(" %d", arr1[i]);
                }
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
