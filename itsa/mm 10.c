#include<stdio.h>

int main()
{
    float a;
    while(scanf("%f", &a) != EOF)
    {
        printf("%.1f\n", (int)((a * 9 / 5 + 32) * 10 + 0.5) / 10.0);
    }
}
