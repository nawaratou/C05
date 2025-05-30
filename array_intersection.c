#include <stdio.h>

int deja_imprime(int imprimés[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (imprimés[i] == valeur)
            return 1; // valeur déjà imprimée
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int tab1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
    }

    int m;
    scanf("%d", &m);

    int tab2[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);
    }

    int imprimés[n < m ? n : m]; // tableau pour stocker les éléments déjà affichés
    int compteur = 0; // nombre d'éléments déjà imprimés

    printf("Intersection :");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j] && !deja_imprime(imprimés, compteur, tab1[i])) {
                printf(" %d", tab1[i]);
                imprimés[compteur++] = tab1[i]; // stocker l'élément imprimé
                break;
            }
        }
    }
    printf("\n");

    return 0;
}
