#include <stdio.h>
void main() {
    float speed, dis,time,s,t;
    scanf("%f", &speed);
    scanf("%f", &dis);
    scanf("%f", &time);
    s = speed / 3600.0;
    t = dis/ s;
    if (t<= time) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}