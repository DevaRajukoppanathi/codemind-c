#include<stdio.h>
int main()
    {
        int n,re,s=0;
        scanf("%d",&n);
        while(n!=0)
        {
            re=n%10;
             n=n/10;
            s=s*10+re;
            
        }
        printf("%d",s);
    }