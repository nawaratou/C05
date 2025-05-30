#include <stdio.h> // This line helps us do things like show text on the screen and read numbers.

int main() {
    int n;  // size of the first array (taille du premier tableau)
    scanf("%d", &n); // read the size (lecture de la taille)

    int tab1[n];  // first array (premier tableau)
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);  // read elements of tab1 (lecture des éléments de tab1)
    }

    int m;  // size of the second array (taille du deuxième tableau)
    scanf("%d", &m); // read the size (lecture de la taille)

    int tab2[m];  // second array (deuxième tableau)
    // FIX: Changed from scanf("%d", &tab1[i]) to scanf("%d", &tab2[i])
    for (int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);  // read elements of tab2 (lecture des éléments de tab2)
    }

    // Display the intersection (Affichage de l'intersection)
    printf("Intersection :");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                printf(" %d", tab1[i]);  // common element found (élément commun trouvé)
                break;                   // we don't want to repeat this same element (on ne veut pas répéter ce même élément)
            }
        }
    }
    printf("\n"); // new line at the end

    return 0; // tells the computer that everything went well
}