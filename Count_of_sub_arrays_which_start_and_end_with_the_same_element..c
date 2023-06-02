#include<stdio.h>
int main()                        
{
    int n;
    scanf("%d",&n);                        
    int a[n],i,j,k,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=1;k<=n;k++)
    {
        for(i=0;i<=n-k;i++)
        {
                if(a[i]==a[i+k-1])
                {
                    c++;
                }
        }
    }
    printf("%d",c);
}