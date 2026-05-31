#include<stdio.h>

int main()
{
    int a=0,b=1,c,n,l,i;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        l=a;          

        c=a+b;
        a=b;
        b=c;
    }

    printf("\nLast term = %d",l);

    return 0;
}