#include<stdio.h>

int main()
{
    int i, n;
    while(scanf("%d", &n) != EOF)
    {
        n = n / 35;
        for(i = 1;i <= n;i ++)
        {
            printf("%d", i * 35);
            if(i != n)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
