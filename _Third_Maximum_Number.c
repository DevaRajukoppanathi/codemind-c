
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,m,max,z=1;
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
                m=a[j];
                a[j]=a[j+1];
                a[j+1]=m;
            }
        }
    }
    max=a[n-1];
    if(n>=3)
    {
       for(i=n-1;i>=0;i--)
        {
           if(max>a[i])
           {
               if(z==3)
               {
                   break;
               }
               else
               {
                   max=a[i];
                   z++;
               }
           }
        }
        printf("%d",max);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(i=n-1)
            {
                printf("%d",a[i]);
            }
        }
    }
}
