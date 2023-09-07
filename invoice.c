#include <stdio.h>

void main(){
    int aC,pC,aN,pN,aT,pT;
    printf("Enter your amount and price of Coke :");
    scanf("%d %d",&aC,&pC);
    printf("Enter your amount and price of Nori Lay :");
    scanf("%d %d",&aN,&pN);
    printf("Enter your amount and price of Tissue :");
    scanf("%d %d",&aT,&pT);

    printf("Product\t\tUnit    Price   Total\n");
    printf("\"Coke\"\t\t%d       %d      %d\n",aC,pC,aC*pC);
    printf("\"Nori Lay\"\t%d       %d      %d\n",aN,pN,aN*pN);
    printf("\"Tissue Paper\"\t%d       %d      %d\n",aT,pT,aT*pT);
}