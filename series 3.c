#include <stdio.h>
void main() {
    int n;
    printf("Enter n value\n");
    scanf("%d", &n); {
    for (int i = 0; i < n; i++) {
        int term = i * (i + 1);  
        printf("%d ", term);
    }
    printf("\n");
}
}