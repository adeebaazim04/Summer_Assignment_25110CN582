#include<stdio.h>
int pal();
int pal()
{
    int n,rev=0,r,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    if(rev==n)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
}
int main()
{
    pal();
    return 0;
}