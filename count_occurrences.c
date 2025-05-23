#include <stdio.h>

int main() {
    int n, element;
    scanf("%d", &n);  // Taille du tableau

    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    scanf("%d", &element);  // Élément à chercher

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (tab[i] == element) {
            count++;  // Incrémenter si égal
        }
    }

    printf("L'élément %d apparaît %d fois.\n", element, count);
    return 0;
}
