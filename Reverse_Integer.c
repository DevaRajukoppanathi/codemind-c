#include<stdio.h>
int main()
{
    int n,re,s=0;
    scanf("%d",&n);
    while(n)
    {
        re=n%10;
        s=s*10+re;
        n/=10;
    }
    printf("%d",s);
    return 0;
}