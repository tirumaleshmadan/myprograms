#include<stdio.h>
int main()
{
             int n,sum=0,a,i;
             printf("ENTER LIMIT  : ");
             scanf("%d",&n);
             for(i=0;i<n;i++)
             {
                      scanf("%d",&a);
                      sum+=a;
             }
             printf("%d",sum);
}
             
