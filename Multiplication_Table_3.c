#include<stdio.h>
int main()
{
    int n,a,f,i;
    scanf("%d%d%d",&n,&a,&f);
    for(i=a;i<=f;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}