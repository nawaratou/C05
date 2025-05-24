#include <stdio.h> // Inclusion de la bibliothèque standard C

int main() {
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {3, 4, 5, 6};

    printf("Intersection : ");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; // Pour éviter d'imprimer plusieurs fois un même élément
            }
        }
    }
    printf("\n");

    return 0;
}
