#include<stdio.h>
int main()
{
    int n,i,multiplication;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        multiplication=n*i;
        printf("%d\n",multiplication);
    }
    return 0;
}