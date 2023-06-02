#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[2][n],i,j,sum;
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(j=0;j<n;j++)
        {
            sum=a[0][j]+a[1][j];
            printf("%d ",sum);
        }
}
