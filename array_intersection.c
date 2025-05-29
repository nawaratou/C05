#include <stdio.h>

// Supprime les doublons dans un tableau trié
int remove_duplicates(int arr[], int n) {
    if (n == 0) return 0;
    int i, j = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

// Trie un tableau (tri à bulles)
void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int inter[n1 < n2 ? n1 : n2];
    int k = 0;

    // Trouver l'intersection
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                inter[k++] = a[i];
                break;
            }
        }
    }

    // Trier puis retirer les doublons
    sort(inter, k);
    int size = remove_duplicates(inter, k);

    // Affichage
    printf("Intersection :");
    for (int i = 0; i < size; i++) {
        printf(" %d", inter[i]);
    }
    printf("\n");

    return 0;
}
