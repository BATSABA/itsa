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
    int a, i;
    while(scanf("%d",&a) != EOF)
    {
        for(i = a - 1;i > 1;i --)
        {
            if(isprime(i) == 1)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
}
