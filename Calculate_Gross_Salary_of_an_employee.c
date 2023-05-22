#include<stdio.h>
int main()
{
    float b,hra,da;
    scanf("%f%f%f",&b,&hra,&da);
    float pf=b*0.12;
    float g=pf+b+hra+da;
    printf("%0.2f
%0.2f",pf,g);
}