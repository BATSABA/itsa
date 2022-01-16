#include<stdio.h>

int main()
{
    int i, n;
    long a;
    while(scanf("%d", &n) != EOF)
    {
        a = 1;
        for(i = 1;i <= n;i ++)
        {
            a = a * i;
        }
        printf("%ld\n", a);
    }
}
