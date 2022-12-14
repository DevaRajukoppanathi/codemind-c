#include<stdio.h>
int main()
    {
        int a,n,re,s=0;
        scanf("%d",&n);
          a=n;
        while(a!=0)
        {
            re=a%10;
            s=s*10+re;
             a=a/10;
        }
        if(n==s)
        {
            printf("True");
        }
        else
{
    printf("False");
}
    }