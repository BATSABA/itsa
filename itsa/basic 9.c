#include<stdio.h>

int main()
{
    int i;
    int a;
    int sum;
    while(scanf("%d", &a) != EOF)
    {
        sum = 0;
        for(i = 1;i <= a;i ++)
        {
            if(i % 3 == 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
}
