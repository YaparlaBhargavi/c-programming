#include <stdio.h>
int main() {
    int n;
    printf("Enter n value\n");
    scanf("%d", &n);
{
    int even = 10; 
    int odd = 5;  
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", even);
            even += 50; 
        } else {
            printf("%d ", odd);
            odd += 10; 
        }
    }
    printf("\n");
}
}