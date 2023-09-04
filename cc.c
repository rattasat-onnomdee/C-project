#include <stdio.h>
#include <string.h>

void main(){
    int count;
    char *ourName = "freeCodecamp";
    for (int i = 0; i < strlen(ourName); i++)
    {
        printf("The letter %d is : %c\n",i+1,ourName[i]);
        count++;
    }
    printf("Total letter is : %d letters",count);
}