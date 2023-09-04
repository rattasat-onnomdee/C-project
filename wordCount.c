#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int result = 1,i;
    char arr[100];
    printf("Enter stirng : ");
    fgets(arr ,100 ,stdin);
    for(i = 0; arr[i] != '\0' ; i++) //\0 is delete charactor or string or other data types.
    {
        if ((arr[i] == ' '))//cause of we have to input ' ' space charactor for program count that space charactor. 
                            //ex.champ pek frank , we have space charactor two times and result = 1 plus two times that from space charactor.
        {
            result++;
        }
    }
    printf("Count is : %d",result);

}