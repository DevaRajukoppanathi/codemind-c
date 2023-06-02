










#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k,sum,max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(k=1;k<=n;k++)
    {
        for(i=0;i<=n-k;i++)
        {
            sum=0;
            for(j=i;j<i+k;j++)
            {
                sum+=a[j];
            }
            if(max<sum)
           {
               max=sum;
           }
        }
    }
    printf("%d",max);
}











