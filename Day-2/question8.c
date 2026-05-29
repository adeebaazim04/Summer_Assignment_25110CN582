#include<stdio.h>
int main()
{
    int n,rev=0,r,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=n;i>0;)
    {
        r=i%10;
        rev=rev*10+r;
        i=i/10;
    }
    if(n==rev)
    {
        printf("it is palindrome");
    }
    else
    {
    printf("it is not palindrome");
    }
    return 0;
}