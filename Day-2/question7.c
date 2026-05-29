#include<stdio.h>
int main()
{
    int n,r,prod=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        prod*=r;
        n/=10;
    }
    printf("product=%d",prod);
    return 0;
}
