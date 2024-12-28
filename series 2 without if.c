#include <stdio.h>

int main() {
    int n;
    printf("Enter n value\n");
    scanf("%d", &n);
    
    int even_term = 10; 
    int odd_term = 5;  

    for (int i = 1; i <= n; i++) {
        int term = ((i + 1) % 2) * even_term + (i % 2) * odd_term;
        printf("%d ", term);
        even_term += 50 * ((i + 1) % 2);
        odd_term += 10 * (i % 2);
    }
    printf("\n");

    return 0;
}