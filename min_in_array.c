#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Taille du tableau

    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);  // Remplir le tableau
    }

    int min = tab[0];  // Supposer que le premier est le plus petit

    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];  // Mise à jour si on trouve plus petit
        }
    }

    printf("Le minimum est : %d\n", min);
    return 0;
}
