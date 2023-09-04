#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int i,count = 0;
    char Ans[2];

    printf("  Welcome to the Game\n\n");
    printf("> Press 7 to start the game\n");
    printf("> Press 0 to end the game\n");
    printf("> Please input number : ");
    scanf("%d",&i);

    if (i==7)
    {
        printf("Game has started !\n");

        printf("1.What is 1 + 1?\n");
        printf("A. 1\n");
        printf("B. 2\n");
        printf("C. 3\n");
        printf("D. 4\n");

        printf("Your answer is : ");
        scanf("%s",&Ans);
        if (strcmp(Ans, "B")==0)
        {
            count++;
            printf("score = %d\n",count);
        }else{
            printf("socre = %d\n",count);
        }
        
        printf("2.What is 2 * 10?\n");
        printf("A. 20\n");
        printf("B. 40\n");
        printf("C. 60\n");
        printf("D. 80\n");

        printf("Your answer is : ");
        scanf("%s",&Ans);
        if (strcmp(Ans, "A")==0)
        {
            count++;
            printf("score = %d\n",count);
        }else{
            printf("socre = %d\n",count);
        }

        printf("3.What is the smallest planet in Solar System?\n");
        printf("A. Pluto\n");
        printf("B. Venus\n");
        printf("C. Earth\n");
        printf("D. Mercury\n");

        printf("Your answer is : ");
        scanf("%s",&Ans);
        if (strcmp(Ans, "D")==0)
        {
            count++;
            printf("score = %d\n",count);
        }else{
            printf("socre = %d\n",count);
        }

        printf("4.What year did the Titanic sink in the Atlantic Ocean on 15 April, on its maiden voyage from Southampton?\n");
        printf("A. 1910\n");
        printf("B. 1911\n");
        printf("C. 1912\n");
        printf("D. 1913\n");

        printf("Your answer is : ");
        scanf("%s",&Ans);
        if (strcmp(Ans, "C")==0)
        {
            count++;
            printf("score = %d\n",count);
        }else{
            printf("socre = %d\n",count);
        }

        printf("5.How many breaths does the human body take daily?\n");
        printf("A. 19,000 daily\n");
        printf("B. 20,000 daily\n");
        printf("C. 21,000 daily\n");
        printf("D. 22,000 daily\n");

        printf("Your answer is : ");
        scanf("%s",&Ans);
        if (strcmp(Ans, "B")==0)
        {
            count++;
            printf("score = %d\n",count);
        }else{
            printf("socre = %d\n",count);
        }

        printf("6.Which year was the first Tonka truck made – 1945, 1947, 1949or 1951?\n");
        printf("A. 1951\n");
        printf("B. 1949\n");
        printf("C. 1947\n");
        printf("D. 1945\n");

        printf("Your answer is : ");
        scanf("%s",&Ans);
        if (strcmp(Ans, "C")==0)
        {
            count++;
            printf("score = %d\n",count);
        }else{
            printf("socre = %d\n",count);
        }
        printf("Total score = %d",count);
    }else if (i==0)
    {
        printf("Game has ended!\n");
    }
    
    return 0;


}