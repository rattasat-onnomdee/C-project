#include<stdio.h>

void main()
{
    int weight,total = 0,person = 0;

    while (total < 1500)
    {
      printf("Please input your weight : ");
      person++;
      scanf("%d",&weight);
      total += weight; 
    }
    if ( total >= 1500)
    {
      printf("Sorry,The lift is OVERWEIGHT!\n");
      printf("Total person in the lift : %d\n",person);
      printf("Total weight : %d Kirogram",total);
    }
}