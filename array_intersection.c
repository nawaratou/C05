#include <stdio.h>
#include <stdlib.h>

// Fonction pour calculer l'intersection
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    *returnSize = 0;

    for (int i = 0; i < nums1Size; i++) {
        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                // Vérifier si déjà présent dans result
                int found = 0;
                for (int k = 0; k < *returnSize; k++) {
                    if (result[k] == nums1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    result[*returnSize] = nums1[i];
                    (*returnSize)++;
                }
            }
        }
    }
    return result;
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int nums1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &n2);
    int nums2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &nums2[i]);
    }

    int returnSize;
    int* result = intersection(nums1, n1, nums2, n2, &returnSize);

    printf("Intersection :");
    for (int i = 0; i < returnSize; i++) {
        printf(" %d", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
