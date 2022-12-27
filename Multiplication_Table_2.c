#include<stdio.h>
int main()
{
    int n,f,i;
    scanf("%d%d",&n,&f);
    for(i=1;i<=f;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
    
}