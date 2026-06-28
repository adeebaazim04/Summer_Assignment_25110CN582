#include<stdio.h>
int fib();
int fib()
{
    int a=0,b=1,c,n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;

    }
}
int main()
{
    fib();
    return 0;
}