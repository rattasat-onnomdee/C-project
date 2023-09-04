#include <stdio.h>
#include <math.h>

int main() {
    double x,t,e,l;
    printf("Input value of x : ");
    scanf("%lf",&x);
    t = (pow(sin(x),2) * pow(cos(x),2));
    printf("Value of tan :  %lf\n",t);
    
    l = log(pow(x,2)/1-x);
    printf("Value of l : %lf\n",l);

    e = pow(2.71828,((sqrt(tan(x) * cos(x)))/2));
    printf("Value of e : %lf",e);
}