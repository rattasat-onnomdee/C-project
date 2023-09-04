#include <stdio.h>
#include <math.h>
#include <string.h>

void main () 
{
    char unit[10];
    int degree;
    printf("Please input tamperature unit : ");
    scanf("%s",&unit);
    printf("Input your temperature degree : ");
    scanf("%d",&degree);

    if(strcmp (unit,"Celcius") == 0)
    {
        int F = 9*(degree / 5)+32;
        printf("Fahrenheit : %d F.",F); 
    }else if(strcmp (unit,"Fahrenheit") == 0){
        int C = 5*((degree - 32)/ 9);
        printf("Celcius : %d C.",C); 
    }else
    {
        printf("Please input your Temperature Unit correctly.");
    }
    

}