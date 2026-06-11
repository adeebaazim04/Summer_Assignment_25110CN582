#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum=sum+i;
        }
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