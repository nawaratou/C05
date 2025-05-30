#include <stdio.h>

int main() { // programme pour trouver l'intersection de deux tableaux
    // Entrée des deux tableaux
    int n; // taille du premier tableau

    scanf("%d", &n); // Lecture de la taille du premier tableau
    int a[n]; // Déclaration du premier tableau
    for (int i = 0; i < n; i++) { // Boucle pour lire les éléments du premier tableau
        scanf("%d", &a[i]); // Lecture des éléments du premier tableau
    } // Fin de la lecture du premier tableau

    int m; // taille du deuxième tableau
    // Lecture de la taille du deuxième tableau
    scanf("%d", &m); // Déclaration du deuxième tableau
    int b[m]; // Boucle pour lire les éléments du deuxième tableau
    for (int i = 0; i < m; i++) { // Lecture des éléments du deuxième tableau
        scanf("%d", &b[i]); // Fin de la lecture du deuxième tableau
    } // Fin de la lecture du deuxième tableau

    printf("Intersection :"); // Affichage de l'en-tête pour l'intersection
    for (int i = 0; i < n; i++) { // Boucle pour parcourir le premier tableau
        for (int j = 0; j < m; j++) { // Boucle pour parcourir le deuxième tableau
            if (a[i] == b[j]) { // Vérification de l'égalité des éléments
                printf(" %d", a[i]); // Affichage de l'élément commun
                break; // Sortie de la boucle interne si un élément commun est trouvé
            }
        }
    }
    printf("\n"); // Affichage d'une nouvelle ligne après l'intersection
    return 0;
}
