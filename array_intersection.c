#include <stdio.h>

int main(void)
{
    int n, m;
    int i, j, k;
    int tab1[100], tab2[100];

    // Lecture de la taille du premier tableau
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &tab1[i]); // Lecture un à un

    // Lecture de la taille du deuxième tableau
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &tab2[i]); // Lecture un à un

    // Affichage de l'intersection sans doublons
    printf("Intersection :");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (tab1[i] == tab2[j])
            {
                // Vérifier si déjà affiché
                int deja_affiche = 0;
                for (k = 0; k < i; k++)
                {
                    if (tab1[k] == tab1[i])
                    {
                        deja_affiche = 1;
                        break;
                    }
                }
                if (!deja_affiche)
                    printf(" %d", tab1[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}
