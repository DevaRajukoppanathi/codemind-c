#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=00000000 && n<=99999999)
    {
        printf("Invalid");
    }
    else
    {
        printf("Valid");
    }
}