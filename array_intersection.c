#include <stdio.h>

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

    // Afficher les éléments présents dans les deux tableaux (intersection)
    printf("Intersection : ");
    for (int i = 0; i < n; i++) {

        // Étape 1 : vérifier si tab1[i] existe dans tab2
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                found = 1;
                break; // inutile de continuer
            }
        }

        // Étape 2 : éviter les doublons (si déjà apparu dans tab1)
        int deja_affiche = 0;
        for (int k = 0; k < i; k++) {
            if (tab1[i] == tab1[k]) {
                deja_affiche = 1;
                break;
            }
        }

        // Étape 3 : afficher seulement si trouvé dans tab2 et pas encore affiché
        if (found && !deja_affiche) {
            printf("%d ", tab1[i]);
        }
    }

    printf("\n");

    return 0;
}
