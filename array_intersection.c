#include <stdio.h>

// Fonction pour trier un tableau (tri à bulles)
void sort(int size, int a[]) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Fonction pour supprimer les doublons dans un tableau trié
int removeRepeated(int size, int a[]) {
    int i, j = 0;
    if (size == 0) return 0;

    for (i = 1; i < size; i++) {
        if (a[i] != a[j]) {
            j++;
            a[j] = a[i];
        }
    }
    return j + 1;
}

int main() {
    int size1, size2, i, j, k = 0;

    // Lecture des tailles
    scanf("%d", &size1);
    int a[size1];
    for (i = 0; i < size1; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &size2);
    int b[size2];
    for (i = 0; i < size2; i++) {
        scanf("%d", &b[i]);
    }

    // Taille max possible pour l'intersection
    int maxSize = (size1 < size2) ? size1 : size2;
    int intersection[maxSize];

    // Calcul de l'intersection
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (a[i] == b[j]) {
                intersection[k++] = a[i];
                break; // Évite les doublons s’il y en a dans b[]
            }
        }
    }

    // Trier et supprimer les doublons
    sort(k, intersection);
    int finalSize = removeRepeated(k, intersection);

    // Affichage du résultat
    if (finalSize > 0) {
        printf("Intersection :");
        for (i = 0; i < finalSize; i++) {
            printf(" %d", intersection[i]);
        }
        printf("\n");
    } else {
        printf("Intersection :\n");
    }

    return 0;
}
