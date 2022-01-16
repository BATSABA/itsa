#include<stdio.h>

int main()
{
    float x, y;
    while(scanf("%f %f", &x, &y) != EOF)
    {
        if(x * x + y * y <= 40000)
        {
            printf("inside\n");
        }
        else
        {
            printf("outside\n");
        }
    }
}
