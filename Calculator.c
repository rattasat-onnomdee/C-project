#include <stdio.h>
#include <math.h>
#include <stdlib.h>//  เป็นไลบราลีที่ใช้ในการแปลงค่าสตริงและตัวเลขไปมา

int main()
{
    char operator;
    int a,b,result;
    printf("Input two numbers : ");
    scanf("%d , %d",&a,&b);
    printf("Input your operator : ");
    scanf("%s",&operator);
    
    switch (operator)
    {
    case '+':
        result = a + b;
        printf("Answer is : %d",result);
        break;
    case '-':
        result = a - b;
        printf("Answer is : %d",result);
        break;
    case '*':
        result = a * b;
        printf("Answer is : %d",result);
        break;
    case '/':
        result = a / b;
        printf("Answer is : %d",result);
        break;
    case '%':
        result = a % b;
        printf("Answer is : %d",result);
        break;
    
    default:
        printf("You don't input operator");
        break;
    }

}