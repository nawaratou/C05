#include <stdio.h>

#define MAX 1001 // Limite max pour les valeurs possibles dans les tableaux

void intersection(int A[], int B[], int m, int n) {
    int hash[MAX] = {0}; // Hash table pour B
    int res[MAX] = {0};  // Résultat sans doublons

    // Marquer les éléments de B dans la hash table
    for (int i = 0; i < n; i++) {
        hash[B[i]] = 1;
    }

    // Chercher les éléments de A qui sont aussi dans B
    for (int i = 0; i < m; i++) {
        if (hash[A[i]] == 1 && res[A[i]] == 0) {
            printf("%d ", A[i]);
            res[A[i]] = 1; // Pour éviter les doublons dans la sortie
        }
    }
}

int main() {
    int m, n;

    // Lire la taille et les éléments du premier tableau
    scanf("%d", &m);
    int A[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    // Lire la taille et les éléments du second tableau
    scanf("%d", &n);
    int B[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    printf("Intersection : ");
    intersection(A, B, m, n);
    printf("\n");

    return 0;
}
