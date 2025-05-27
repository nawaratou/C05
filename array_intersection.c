#include <stdio.h>

// Fonction pour vérifier si un élément existe dans un tableau
int existe_deja(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return 1; // Existe déjà
        }
    }
    return 0; // N'existe pas
}

int main() {
    int taille1, taille2;

    // Lecture de la taille du premier tableau
    printf("Entrez la taille du premier tableau :\n");
    scanf("%d", &taille1);

    int tab1[taille1];

    // Lecture des éléments du premier tableau
    printf("Entrez les éléments du premier tableau :\n");
    for (int i = 0; i < taille1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lecture de la taille du second tableau
    printf("Entrez la taille du second tableau :\n");
    scanf("%d", &taille2);

    int tab2[taille2];

    // Lecture des éléments du second tableau
    printf("Entrez les éléments du second tableau :\n");
    for (int i = 0; i < taille2; i++) {
        scanf("%d", &tab2[i]);
    }

    int intersection[taille1 < taille2 ? taille1 : taille2];
    int taille_intersection = 0;

    // Comparaison croisée des deux tableaux
    for (int i = 0; i < taille1; i++) {
        for (int j = 0; j < taille2; j++) {
            if (tab1[i] == tab2[j]) {
                // Ajoute à l'intersection si ce n'est pas déjà là
                if (!existe_deja(intersection, taille_intersection, tab1[i])) {
                    intersection[taille_intersection++] = tab1[i];
                }
            }
        }
    }

    // Affichage du résultat
    printf("Intersection : ");
    for (int i = 0; i < taille_intersection; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");

    return 0;
}
