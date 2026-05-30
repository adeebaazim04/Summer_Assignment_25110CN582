#include<stdio.h>
int main()
{
    int i,a,b,j,flag=0;
    printf("enter the lower limit of range");
     scanf("%d",&a);
     printf("enter the upper limit of range");
     scanf("%d",&b);
     for(j=a;j<=b;j++)
     {
         flag=0;
         for(i=2;i<=j/2;i++)
         { 
            if(j%i==0)
            {
            flag=1;
             break;
            }
         }
         if(flag==0 && j>0)
         {
             printf("%d\n",j);
         }
     }
     return 0;
    }