#include <stdio.h>

void main(){
    float w,l,h,volume;
    printf("Please enter width length and height : ");
    scanf("%f %f %f",&w,&l,&h);
    printf("Volume of %.2f * %.2f * %.2f box is %.2f",w,l,h,volume = w*l*h);
}
