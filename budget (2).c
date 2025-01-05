#include <stdio.h>
void main() {
    int blast_rifles, visual_sensors, auditory_sensors, arms, legs;
    float cost_blaster = 350.34; 
    float cost_visual = 230.90;   
    float cost_auditory = 190.55;
    float cost_arms = 125.30;     
    float cost_legs = 180.90;    
    float total_cost;
    scanf("%d", &blast_rifles);
    scanf("%d", &visual_sensors);
    scanf("%d", &auditory_sensors);
    scanf("%d", &arms);
    scanf("%d", &legs);
    total_cost = (blast_rifles * cost_blaster) +(visual_sensors * cost_visual) +(auditory_sensors * cost_auditory) +(arms * cost_arms) +(legs * cost_legs);
    if (total_cost <= 15000) 
    {
        printf("no\n");
    } else {
        printf("yes\n");
    }
}