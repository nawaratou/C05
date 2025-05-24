#include <stdio.h>

int main(void) {
    int n1, n2;
    int arr1[100], arr2[100]; //  tailles fixes autorisées

    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection :");

    for (int i = 0; i < n1; i++) {
        int already_seen = 0;

        // éviter les doublons
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                already_seen = 1;
                break;
            }
        }

        if (already_seen) continue;

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
