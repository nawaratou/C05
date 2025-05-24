#include <stdio.h>

int main(void) {
    int n1, n2;
    int arr1[100], arr2[100], intersection[100];
    int inter_size = 0;

    // Lecture du premier tableau
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Lecture du deuxième tableau
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Recherche de l'intersection
    for (int i = 0; i < n1; i++) {
        // Vérifier si arr1[i] est présent dans arr2
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Vérifier si arr1[i] est déjà dans intersection[]
                int already_in_intersection = 0;
                for (int k = 0; k < inter_size; k++) {
                    if (intersection[k] == arr1[i]) {
                        already_in_intersection = 1;
                        break;
                    }
                }
                // Si ce n'est pas un doublon, l'ajouter à intersection[]
                if (!already_in_intersection) {
                    intersection[inter_size] = arr1[i];
                    inter_size++;
                }
                break; // Passer à l'élément suivant de arr1
            }
        }
    }

    // Affichage de l'intersection
    printf("Intersection :");
    for (int i = 0; i < inter_size; i++) {
        printf(" %d", intersection[i]);
    }
    printf("\n");

    return 0;
}
