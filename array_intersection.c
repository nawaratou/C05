#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1); // Lecture de la taille du premier tableau

    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]); // Lecture des éléments du 1er tableau
    }

    scanf("%d", &n2); // Lecture de la taille du 2e tableau

    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]); // Lecture des éléments du 2e tableau
    }

    printf("Intersection : ");
    for (int i = 0; i < n1; i++) {
        int already_printed = 0;
        // Vérifier si l'élément arr1[i] a déjà été imprimé
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                already_printed = 1;
                break;
            }
        }

        if (already_printed)
            continue; // on passe à l’élément suivant

        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
