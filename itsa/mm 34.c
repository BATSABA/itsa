#include<stdio.h>

int main()
{
    int i, n;
    while(scanf("%d", &n) != EOF)
    {
        for(i = 1;i <= n;i ++)
        {
            if(n % i == 0)
            {
                printf("%d", i);
                if(i != n)
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

