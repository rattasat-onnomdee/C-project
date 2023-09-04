#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

void main ()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int  answer;

    srand(time(0));
    answer = (rand()  % MAX) + MIN;

    printf("Input your guess numbers : ");
    scanf("%d",&guess);

    
   do
   {
    printf("Input your guess numbers : ");
    scanf("%d",&guess);
    if(guess < answer)
    {
        printf("That's too low!\n");
    }
    else if (guess > answer)
    {
        printf("That's too high!\n");
    }else
    {
        printf("CORRECT!\n");
    }
    
   } while (guess != answer);
   
    
    
}