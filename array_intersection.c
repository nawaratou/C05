#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[100], arr2[100]; // Taille max fixée à 100 pour éviter les erreurs

    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection : ");
    for (int i = 0; i < n1; i++) {
        int already_printed = 0;

        // Vérifie si arr1[i] a déjà été affiché
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                already_printed = 1;
                break;
            }
        }

        if (already_printed)
            continue;

        // Vérifie si arr1[i] est présent dans arr2
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
