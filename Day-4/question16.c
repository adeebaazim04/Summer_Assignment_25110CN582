#include<stdio.h>

int main()
{
    int n, count = 0, num = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while(1)
    {
        int temp = num;
        int sum = 0;

        while(temp > 0)
        {
            int r = temp % 10;
            sum += r * r * r;
            temp /= 10;
        }

        if(sum == num)
        {
            count++;

            if(count == n)
            {
                printf("%dth Armstrong number = %d", n, num);
                break;
            }
        }

        num++;
    }

    return 0;
}