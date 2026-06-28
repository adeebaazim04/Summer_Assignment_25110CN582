#include<stdio.h>
int max();
int max()
{
    int a,b,max;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    return max;
}
int main()
    {
        int result;
        result=max();
        printf("The maximum number is:%d",result);
         return 0;
    }
   
