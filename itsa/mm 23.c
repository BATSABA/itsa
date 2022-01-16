#include<stdio.h>

int main()
{
    int a;
    float b;
    double c;
    while(scanf("%d%f", &a, &b) != EOF)
    {
        if(a <= 60)
        {
            c = a * b;
        }
        else if(a <= 120)
        {
            c = b * 60;
            a -= 60;
            c += b * a * 1.33;
        }
        else
        {
            c = b * 60 + b * 60 * 1.33;
            a -= 120;
            c += b * a * 1.66;
        }
        printf("%.1lf\n", c);
    }
}
