#include<stdio.h>
int main()
{
 int n,s=0,p=1,result;
 scanf("%d",&n);
  while (n > 0)
        {
            s += n % 10;
            p *= n % 10;
            n /= 10;
         }
        
         result=p - s;
         printf("%d",result);
}
