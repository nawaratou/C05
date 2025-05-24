#include <stdio.h>

int main() {
    int size1, size2;
    
    // Lecture du premier tableau
    scanf("%d", &size1);
    int arr1[size1];
    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Lecture du deuxième tableau
    scanf("%d", &size2);
    int arr2[size2];
    for(int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    printf("Intersection :");
    int found = 0;
    
    // Parcourir le premier tableau
    for(int i = 0; i < size1; i++) {
        // Vérifier les doublons dans arr1
        int is_duplicate = 0;
        for(int j = 0; j < i; j++) {
            if(arr1[i] == arr1[j]) {
                is_duplicate = 1;
                break;
            }
        }
        
        if(!is_duplicate) {
            // Chercher dans arr2
            for(int k = 0; k < size2; k++) {
                if(arr1[i] == arr2[k]) {
                    // Vérifier les doublons dans arr2
                    int duplicate_in_arr2 = 0;
                    for(int l = 0; l < k; l++) {
                        if(arr2[l] == arr2[k]) {
                            duplicate_in_arr2 = 1;
                            break;
                        }
                    }
                    
                    if(!duplicate_in_arr2) {
                        printf(" %d", arr1[i]);
                        found = 1;
                        break;
                    }
                }
            }
        }
    }
    
    if(!found) {
        printf(" Aucun");
    }
    printf("\n");
    
    return 0;
}