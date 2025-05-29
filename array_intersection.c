#include <stdio.h>

#define MAX 1001 // On suppose que les valeurs sont entre 0 et 1000

void intersection(int A[], int B[], int m, int n, int res[], int *res_size) {
    int hash[MAX] = {0};     // Marque les éléments présents dans B
    int seen[MAX] = {0};     // Pour éviter les doublons dans le résultat

    *res_size = 0;

    // Marquer les éléments de B dans la table de hachage
    for (int i = 0; i < n; i++) {
        hash[B[i]] = 1;
    }

    // Vérifier les éléments de A
    for (int i = 0; i < m; i++) {
        if (hash[A[i]] == 1 && seen[A[i]] == 0) {
            res[*res_size] = A[i];
            (*res_size)++;
            seen[A[i]] = 1; // Ne pas ajouter plusieurs fois
        }
    }
}

int main() {
    int m, n;
    scanf("%d", &m);
    int A[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &n);
    int B[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    int res[m < n ? m : n]; // Taille max possible de l’intersection
    int res_size;

    intersection(A, B, m, n, res, &res_size);

    // Sortie conforme à l’exemple
    printf("Intersection :");
    for (int i = 0; i < res_size; i++) {
        printf(" %d", res[i]);
    }
    printf("\n");

    return 0;
}
