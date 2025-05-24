#include <stdio.h>

int main(void) {
    int n1;
    scanf("%d", &n1);

    int arr1[n1]; //  maintenant n1 est déjà connu
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    int n2;
    scanf("%d", &n2);

    int arr2[n2]; // maintenant n2 est déjà connu
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection :");

    for (int i = 0; i < n1; i++) {
        int already_seen = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                already_seen = 1;
                break;
            }
        }

        if (already_seen)
            continue;

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
