#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);  // Taille du premier tableau
    int tab1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    scanf("%d", &n2);  // Taille du second tableau
    int tab2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    int fusion[n1 + n2];  // Tableau fusionné
    for (int i = 0; i < n1; i++) {
        fusion[i] = tab1[i];
    }
    for (int i = 0; i < n2; i++) {
        fusion[n1 + i] = tab2[i];
    }

    printf("Tableau fusionné : ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", fusion[i]);
    }
    printf("\n");

    return 0;
}
