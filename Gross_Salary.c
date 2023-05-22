#include<stdio.h>
int main()
{
    float b,da,hra,g;
    scanf("%f",&b);
    if(b<=10000)
    {
        da=b*0.8;
        hra=b*0.2;
        g=b+da+hra;
    }
    else if(b<=20000)
    {
        da=b*0.9;
        hra=b*0.25;
        g=b+hra+da;
    }
    else if(b>20000)
    {
        da=b*0.95;
        hra=b*0.3;
        g=b+hra+da;
    }
    printf("%0.2f",g);
}