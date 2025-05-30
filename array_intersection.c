#include <stdio.h>

int main() {
    int n;  // taille du premier tableau
    scanf("%d", &n);

    int a[n];  // premier tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // lecture des éléments de tab1
    }

    int m;  // taille du deuxième tableau
    scanf("%d", &m);

    int b[m];  // deuxième tableau
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);  // lecture des éléments de tab2
    }

    // Affichage de l'intersection
    printf("Intersection :");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                printf(" %d", a[i]);  // élément commun trouvé
                break;                   // on ne veut pas répéter ce même élément
            }
        }
    }
    printf("\n");

    return 0;
}
