#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n+i;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}