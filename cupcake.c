#include <stdio.h>

void main(){
    int c,p;
    printf("Enter number of cupcakes:");
    scanf("%i",&c);
    printf("Enter number of people:");
    scanf("%i",&p);
    printf("Everyone will get %d pieces\n",c/p);
    printf("There are %d remaining pieces\n",c % p);
}