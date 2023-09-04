#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int num,price,discount,newPrice;
    printf("How much your order: ");
    scanf("%d",&price);
    printf("How many your order: ");
    scanf("%d",&num);
    if (price < 2000)
    {
        discount = num*(price - (price * 0.95));
        newPrice = num*(price * 0.95);
    }else
    {
        discount = num*(price - (price * 0.9));
        newPrice = num*(price * 0.9);
    }
    printf("number of item          price           discount            new price\n");
    printf("      %d                  %d               %d                  %d",num,price,discount,newPrice);
    
    


    return 0;
}