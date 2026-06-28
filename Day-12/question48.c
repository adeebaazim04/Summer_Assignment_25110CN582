#include<stdio.h>
int per();
int per()
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
}
int main()
{
    per();
    return 0;
}