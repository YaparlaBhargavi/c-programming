#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter n value\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", (int)pow(i, i));
    }
    printf("\n");
    return 0;
}