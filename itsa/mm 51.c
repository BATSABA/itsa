
#include<stdio.h>

int isprime(int a)
{
    int i;
    if(a == 2)
    {
        return 1;
    }
    if(a == 1)
    {
        return 0;
    }
    for(i = 2;i < a;i ++)
    {
        if(a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, i, j, sum;
    while(scanf("%d",&a) != EOF)
    {
        sum = 0;
        i = 0;
        j = 2;
        while(i < a)
        {
            while(isprime(j) != 1)
            {
                j ++;
            }
            printf("%d,", j);
            sum += j;
            j ++;
            i ++;
        }
        printf("\n%d\n", sum);
    }
}

