#include <stdio.h>
#include <stdbool.h>

int main() {
    int n1, n2;
    
    // Lecture du premier tableau
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Lecture du deuxième tableau
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection :");

    // Recherche des éléments communs
    for (int i = 0; i < n1; i++) {
        // Vérification des doublons dans arr1
        bool deja_vu = false;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                deja_vu = true;
                break;
            }
        }

        if (deja_vu) {
            continue;
        }

        // Recherche dans le deuxième tableau
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf(" %d", arr1[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}