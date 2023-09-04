#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int pin,balance = 500000,withdraw,deposit,chioce;

        printf("ENTER YOUR SECERT PIN : ");
        scanf("%d",&pin);
        if (pin != 1111)
        {
            printf("PLEASE ENTER VALID PIN\n");
        }

    printf("\n\n********Welcome to ATM Service**************");
    printf("\n\n1. Check Balance");
    printf("\n2. Withdraw Cash");
    printf("\n3. Deposit Cash");
    printf("\n4. Quit");
    printf("\n\n********************************************");

    printf("\n\nChoose your chioce : ");
    scanf("%d",&chioce);

    switch (chioce)
    {
    case 1:
        printf("YOUR BALANCE : %d",balance); 
        break;
    case 2 :
        printf("Please input your withdraw : ");
        scanf("%d",&withdraw);
        if(withdraw % 100 != 0){
            printf("Please input new withdraw");
        }else if (withdraw > balance)
        {
            printf("INSUFFICIANT BALANCE");
        }
        printf("\n\n PLEASE COLLECT CASH");
        printf("YOUR BALANCE : %d",balance - withdraw);
        break;
    case 3 :
        printf("Please input your deposit : ");
        scanf("%d",&deposit);
        if(deposit % 100 != 0){
            printf("Please input new withdraw");
        }
        printf("YOUR BALANCE : %d",balance + deposit);
        break;
    case 4:
        printf("THANKS FOR SERVICE");
        break;
    default:
        printf("INVALID CHIOCE");
        break;
    }
    

    
    return 0;
}