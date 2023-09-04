#include <stdio.h>
#include <math.h>
#include <time.h>

int main (){
    int money,time = 15;
    printf("Please input your money : ");
    scanf("%d",&money);

    if (money % 10 == 0)
    {
       switch (money)
       {
       case 10:
        printf("time : %d minute",time * 1);
        printf("\ntotal : %d bath",money);
        break;
       case 20:
        printf("time : %d minute",time * 2);
        printf("\ntotal : %d bath",money);
        break;
       case 30:
        printf("time : %d minute",time * 3);
        printf("\ntotal : %d bath",money);
        break;
       case 40:
        printf("time : %d minute",time * 4);
        printf("\ntotal : %d bath",money);
        break;
       case 50:
        printf("time : %d minute",time * 5);
        printf("\ntotal : %d bath",money);
        break;
       case 60:
        printf("time : %d minute",time * 6);
        printf("\ntotal : %d bath",money);
        break;

       default:
        printf("The machine can not get money more than 60 bath");
        break;
       }
      
       
    } else if(money % 10 !=0 || money > 60)
        {
            printf("Please input 10 bath coin please!");
        }
    
    
    return 0;
}
