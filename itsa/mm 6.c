#include<stdio.h>

int main()
{
    double a;
    while(scanf("%lf", &a) != EOF)
    {
        printf("%.1lf\n", (int)(a * 1.6 * 10 + 0.5) / 10.0);
    }
}
