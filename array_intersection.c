#include <stdio.h>

int main() {
    int n;  // taille du premier tableau
    scanf("%d", &n);

    int tab1[n];  // premier tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);  // lecture des éléments de tab1
    }

    int m;  // taille du deuxième tableau
    scanf("%d", &m);

    int tab2[m];  // deuxième tableau
    for (int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);  // lecture des éléments de tab2 (corrigé ici)
    }

    printf("Intersection :");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                printf(" %d", tab1[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}
