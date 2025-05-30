#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);

    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Afficher les éléments présents dans les deux tableaux (intersection)
    printf("Intersection : ");
    for (int i = 0;i < n; i++) {

        // Étape 1 : vérifier si tab1[i] existe dans tab2
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break; // inutile de continuer
            }
        }

        // Étape 2 : éviter les doublons (si déjà apparu dans tab1)
        int deja_affiche = 0;
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                deja_affiche = 1;
                break;
            }
        }

        // Étape 3 : afficher seulement si trouvé dans tab2 et pas encore affiché
        if (found && !deja_affiche) {
            printf("%d ", a[i]);
        }
    }

    printf("\n");

    return 0;
}