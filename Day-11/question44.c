#include<stdio.h>
int fact();
int fact()
{
    int n,i;
    long fact=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
     printf("The factorial of the digits is:%ld",fact);
    
}
int main()
{
    fact();
    
    return 0;
}