#include<stdio.h>

int main()
{
    int a, b, i;
    int sum;
    while(scanf("%d%d", &a, &b) != EOF)
    {
        sum = 0;
        if(a > b)
        {
            i = a;
            a = b;
            b = i;
        }
        for(i = a;i <= b;i ++)
        {
            sum += i;
        }
        printf("%d\n", sum);
    }
}
