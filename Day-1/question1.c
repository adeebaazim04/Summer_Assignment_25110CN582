#include<stdio.h>
int main ()
{
    int i,N,sum=0;
    printf("enter number:");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        sum+=i;
    }
    printf("sum=%d",sum);
    return 0; 
}