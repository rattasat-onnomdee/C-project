#include <stdio.h>
#include <math.h>

int main ()
{
    int a,b,c,totalScore;

    printf("Enter the work score : ");
    scanf("%d", &a);

    printf("Enter the Mid score  : ");
    scanf("%d", &b);

    printf("Enter the Final score: ");
    scanf("%d", &c);

    totalScore = a+b+c;

    if (totalScore >= 80 && totalScore <= 100)
   {
        printf("You Grade is A");
   }else if (75 <= totalScore && totalScore <= 79)
   {
        printf("You Grade is B+");
   }else if (70 <= totalScore && totalScore <= 74)
   {
        printf("You Grade is B");
   }else if (65 <= totalScore && totalScore <= 69)
   {
        printf("You Grade is C+");
   }else if (60 <= totalScore && totalScore <= 64)
   {
        printf("You Grade is C");
   }else if (55 <= totalScore && totalScore <= 59)
   {
        printf("You Grade is D+");
   }else if (50 <= totalScore && totalScore <= 54)
   {
        printf("You Grade is D");
   }else
   {
        printf("You Failed");
   }     
   return 0;


}