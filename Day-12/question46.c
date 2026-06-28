#include<stdio.h>
#include<math.h>
int arm();
int arm()
{
    int n,c=0,i,j,d,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        c++;
    }
    for(j=n;j>0;j=j/10)
    {
        d=j%10;
        sum=sum+pow(d,c);
    }
    if(sum==n)
    {
        printf("The number is armstrong");
    }
    else
    {
        printf("The number is not armstrong");
    }
}
int main()
{
    arm();
   return 0;
}