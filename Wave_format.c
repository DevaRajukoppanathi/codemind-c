#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],j,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<n-1;i+=2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}