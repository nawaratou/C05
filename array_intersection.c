#include <stdio.h>

int est_deja_affiche(int arr[], int taille, int valeur) {
    // Vérifie si 'valeur' est déjà dans 'arr'
    for (int i = 0; i < taille; i++) {
        if (arr[i] == valeur) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int tab1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    scanf("%d", &n2);
    int tab2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    int resultat[n1 < n2 ? n1 : n2]; // Taille maximale possible de l'intersection
    int taille_resultat = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j] && !est_deja_affiche(resultat, taille_resultat, tab1[i])) {
                // Si élément commun et pas déjà ajouté
                resultat[taille_resultat] = tab1[i];
                taille_resultat++;
            }
        }
    }

    printf("Intersection : ");
    for (int i = 0; i < taille_resultat; i++) {
        printf("%d ", resultat[i]);
    }
    printf("\n");

    return 0;
}
