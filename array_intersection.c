#include <stdio.h>

int main() {
    int size1, size2;
    
    // Lecture du premier tableau
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Lecture du deuxième tableau
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection :");
    int found = 0;

    for (int i = 0; i < size1; i++) {
        int value = arr1[i];

        // Vérifie si value est déjà affichée
        int already_printed = 0;
        for (int j = 0; j < i; j++) {
            if (arr1[j] == value) {
                already_printed = 1;
                break;
            }
        }

        if (already_printed) continue;

        // Cherche si value existe dans arr2
        for (int k = 0; k < size2; k++) {
            if (arr2[k] == value) {
                printf(" %d", value);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf(" Aucun");
    }

    printf("\n");
    return 0;
}
