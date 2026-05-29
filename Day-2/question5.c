#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
    r=n%10; 
    sum+=r;
    n/=10;
    }
printf("sum=%d",sum);
return 0;
}