#include <stdio.h>

int main() {
    int taille1, taille2;
    
    // Lecture des tableaux
    scanf("%d", &taille1);
    int tab1[taille1];
    for(int i = 0; i < taille1; i++) {
        scanf("%d", &tab1[i]);
    }
    
    scanf("%d", &taille2);
    int tab2[taille2];
    for(int i = 0; i < taille2; i++) {
        scanf("%d", &tab2[i]);
    }
    
    // Recherche de l'intersection
    printf("Intersection :");
    int intersection_trouvee = 0;
    
    for(int i = 0; i < taille1; i++) {
        // Vérifier si c'est un doublon dans tab1
        int doublon = 0;
        for(int j = 0; j < i; j++) {
            if(tab1[j] == tab1[i]) {
                doublon = 1;
                break;
            }
        }
        
        if(!doublon) {
            // Chercher dans tab2
            for(int k = 0; k < taille2; k++) {
                if(tab1[i] == tab2[k]) {
                    printf(" %d", tab1[i]);
                    intersection_trouvee = 1;
                    break;
                }
            }
        }
    }
    
    if(!intersection_trouvee) {
        printf(" Aucun");
    }
    printf("\n");
    
    return 0;
}