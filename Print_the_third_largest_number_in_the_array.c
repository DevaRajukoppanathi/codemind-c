
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,t,j,c=0,max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    max=a[n-1];
    for(i=n-1;i>=0;i--)
    {
       if(max>a[i])
       {
           c++;
           max=a[i];
       }
       if(c==2) 
       {
           break;
       }
    }
    if(c==2)
    {
        printf("%d",max);
    }
    else
    {
        printf("It is not possible");
    }
}