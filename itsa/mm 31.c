#include<stdio.h>

int main()
{
    int i, n;
    int sum;
    while(scanf("%d", &n) != EOF)
    {
        sum = 0;
        for(i = 6;i <= n;i ++)
        {
            if(i % 6 == 0 && i % 12 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
}
