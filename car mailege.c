#include <stdio.h>
void main() {
    float mileage;
    int petrol, distance;

    scanf("%f", &mileage);
    scanf("%d", &petrol);
    scanf("%d", &distance);

    if (mileage * petrol >= distance) 
    {
        printf("Can reach\n");
    } 
    else
    {
        printf("Cannot reach\n");
    }
}