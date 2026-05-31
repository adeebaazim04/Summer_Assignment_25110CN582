#include<stdio.h>

int main()
{
    int i,n,r,sum,temp;

    for(i=1;i<=100;i++)
    {
        n=i;
        sum=0;
        temp=n;

        while(n>0)
        {
            r=n%10;
            sum+=r*r*r;
            n/=10;
        }

        if(sum==temp)
            printf("%d ",temp);
    }

    return 0;
}