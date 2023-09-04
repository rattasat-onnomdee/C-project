#include <stdio.h>
#include <math.h>

int Graph1(int a,int result){
    for (int i = 0; i < a; i++)
    {
        printf("*");
        result++;
        if(result == a){
            printf("\n");
        }
    } 

}
int Graph2(int b,int result){
    for (int i = 0; i < b; i++)
    {
        printf("*");
         result++;
        if(result == b){
            printf("\n");
        }
    } 

}
int Graph3(int c,int result){
    for (int i = 0; i < c; i++)
    {
        printf("*");
        result++;
        if(result == c){
            printf("\n");
        }
    } 

}
int Graph4(int d,int result){
    for (int i = 0; i < d; i++)
    {
        printf("*");
        result++;
        if(result == d){
            printf("\n");
        }
    } 

}
int Graph5(int e,int result){
    for (int i = 0; i < e; i++)
    {
        printf("*");
        result++;
        if(result == e){
            printf("\n");
        }
    } 

}

int main(){
    int a,b,c,d,e,result = 0;

    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    Graph1(a,result);
    Graph2(b,result);
    Graph3(c,result);
    Graph4(d,result);
    Graph5(e,result);

}