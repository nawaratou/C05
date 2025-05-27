#include <stdio.h>

int main() {
    int n1, n2;
    
    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int tab1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int tab2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    // Afficher les éléments communs (intersection)
    printf("Intersection :");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                // Vérifie si cet élément a déjà été affiché
                int deja_affiche = 0;
                for (int k = 0; k < i; k++) {
                    if (tab1[k] == tab1[i]) {
                        deja_affiche = 1;
                        break;
                    }
                }
                if (!deja_affiche) {
                    printf(" %d", tab1[i]);
                }
                break; // Une fois trouvé, pas besoin de continuer
            }
        }
    }
    printf("\n");

    return 0;
}
