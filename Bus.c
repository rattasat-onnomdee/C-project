#include <stdio.h>

void main(){
    float v = 4.2,t;
    printf("Enter time:");
    scanf("%f",&t);
    printf("This distance is %.10f ",(v * t));
}