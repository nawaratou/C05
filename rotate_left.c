#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Lire la taille du tableau

    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);  // Lire les éléments du tableau
    }

    int first = tab[0];  // Sauvegarder le 1er élément

    // Décaler tous les éléments vers la gauche
    for (int i = 0; i < n - 1; i++) {
        tab[i] = tab[i + 1];
    }

    tab[n - 1] = first;  // Mettre le 1er à la fin

    printf("Tableau après rotation : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
