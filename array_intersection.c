#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n1, n2;
    
    // Lecture de la taille du premier tableau
    if (scanf("%d", &n1) != 1 || n1 <= 0) {
        printf("Erreur: taille invalide pour le premier tableau\n");
        return 1;
    }
    
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        if (scanf("%d", &arr1[i]) != 1) {
            printf("Erreur: élément invalide dans le premier tableau\n");
            return 1;
        }
    }

    // Lecture de la taille du deuxième tableau
    if (scanf("%d", &n2) != 1 || n2 <= 0) {
        printf("Erreur: taille invalide pour le deuxième tableau\n");
        return 1;
    }
    
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        if (scanf("%d", &arr2[i]) != 1) {
            printf("Erreur: élément invalide dans le deuxième tableau\n");
            return 1;
        }
    }

    printf("Intersection :");
    bool found = false;

    // Recherche des éléments communs
    for (int i = 0; i < n1; i++) {
        // Vérification des doublons dans arr1
        bool duplicate = false;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                duplicate = true;
                break;
            }
        }

        if (duplicate) continue;

        // Recherche dans le deuxième tableau
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Vérification des doublons dans arr2
                bool duplicate_in_arr2 = false;
                for (int l = 0; l < j; l++) {
                    if (arr2[l] == arr2[j]) {
                        duplicate_in_arr2 = true;
                        break;
                    }
                }
                
                if (!duplicate_in_arr2) {
                    printf(" %d", arr1[i]);
                    found = true;
                    break;
                }
            }
        }
    }

    if (!found) {
        printf(" Aucun");
    }
    printf("\n");

    return 0;
}