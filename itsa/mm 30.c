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
    int a;
    while(scanf("%d",&a) != EOF)
    {
        if(isprime(a) == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}

