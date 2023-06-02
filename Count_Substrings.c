#include<stdio.h>
#include<string.h>
int main()
{
    int s,l,n;
    scanf("%d",&s);
    for(l=1;l<=s;l++)
    {
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int k,i,j,l=strlen(a),c=0;
        for(k=1;k<=l;k++)
        {
            for(i=0;i<=n-k;i++)
            {
                if(a[i]=='1' && a[i+k-1]=='1')
                {
                    c++;
                }
            }
        }
        printf("%d
",c);
    }
}