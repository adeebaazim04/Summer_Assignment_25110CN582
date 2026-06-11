#include<stdio.h>
int main()
{
    int n,j,i,sum=0,d;
    long fact=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        fact=1;
        d=i%10;
        for(j=1;j<=d;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    if(sum==n)
    {
        printf("it is");
    }
    else
    {
        printf("it is not");
    }
    return 0;
}