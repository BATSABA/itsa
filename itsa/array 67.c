#include<stdio.h>

int main()
{
    int a[6];
    int i, j;
    while(scanf("%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]) != EOF)
    {
        for(i = 0;i < 6;i ++)
        {
            for(j = 0;j < 6;j ++)
            {
                printf("%03d", a[i] * a[j]);
                if(j != 5)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
