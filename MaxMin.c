#include <stdio.h>
#include <math.h>

int main()
{
    int arr[5] = {5,9,6,8,1};
    int Max = arr[0];
    int Min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (Max < arr[i])
        {
            Max = arr[i];
        }else if (Min > arr[i])
        {
            Min = arr[i];
        }
    }

    printf("Minimum is : %d\n", Min);
    printf("Maximum is : %d\n", Max);
    
    return 0;
}