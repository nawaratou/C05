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

    int res[100];
    int k = 0; 
    
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (a[i] == b[j]) {
                        res[k++] = a[i];
                    }
                }
            }
        
            printf("Intersection :");
            for (int i = 0; i < k; i++) {
                printf(" %d", res[i]);
            }
            printf("\n");
        
            return 0;
        }