#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],f[n],i,j,c,s;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=c;
        }
    }
    for(i=0;i<n;i++)
    {
        if(f[i]>1)
        {
            s=f[0];
            if(s<f[i])
            {
                s=f[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(f[i]==s)
        {
            printf("%d",a[i]);
        }
    }
}