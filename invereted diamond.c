#include <stdio.h>
    
    void main() {
        int b, a, k, c;
        int n;
        scanf("%d", &n);
    
        // Upper triangle
        for (b = n; b >= 1; b--) {
            for (a = 1; a <= b; a++) {
                printf("%d", a);
            }
            for (k = 2 * (n - b); k > 0; k--) {
                printf(" ");
            }
            for (c = b; c >= 1; c--) {
                printf("%d", c);
            }
            printf("\n");
        }
    
        // Lower triangle
        for (b = 1; b <= n; b++) {
            for (a = 1; a <= b; a++) {
                printf("%d", a);
            }
            for (k = 2 * (n - b); k > 0; k--) {
                printf(" ");
            }
            for (c = b; c >= 1; c--) {
                printf("%d", c);
            }
            printf("\n");
        }
    }