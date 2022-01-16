#include<stdio.h>

int main()
{
    int a[6];
    int i;
    int sum;
    while(scanf("%d%d%d%d%d%d", &a[0] ,&a[1] ,&a[2] ,&a[3] ,&a[4] ,&a[5]) != EOF)
    {
        for(i = 0;i < 6;i ++)
        {
            sum += a[i] * a[i] * a[i];
        }
        printf("%d\n", sum);
    }
}
