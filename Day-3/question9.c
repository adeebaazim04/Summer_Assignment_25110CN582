#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0 && n>0)
    {
        printf("entered number is prime");
    }
    else
    {
        printf("entered number is not prime");
    }
    return 0;
}