#include <stdio.h>
#include<stdlib.h>

int main()
{
    float h, m, a;
    printf("enter hour:");
    scanf("%f",&h);
    printf("enter minuites: ");
    scanf("%f",&m);
    h=(h*30)+(m*0.5);
    m=(m/5)*30;
    a=abs(h-m);
    printf("the angle is: %f",a);
    

}