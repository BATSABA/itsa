#include<stdio.h>

int main()
{
    int a, b, i;
    while(scanf("%d", &a) != EOF)
    {
        b = 0;
        for(i = 1;i <= a;i ++)
        {
            if(i % 3 == 0)
            {
                b += i;
            }
        }
        printf("%d\n", b);
    }
}
