#include<stdio.h>

void main() {
    int n,end, i = 1;
    scanf("%d %d", &n, &end);
    while(i <= end) {
        printf("%d*%d=%d\n", n, i, n * i);
        i++;
    }
    printf("\n");
}