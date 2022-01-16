#include<stdio.h>

int main()
{
    int a, temp[3], b;
    while(scanf("%d",&a) != EOF)
    {
        b = a;
        temp[0] = b / 100;
        b = b % 100;
        temp[1] = b / 10;
        b = b % 10;
        temp[2] = b;
        if(a == temp[0] * temp[0] * temp[0] + temp[1] * temp[1] * temp[1] + temp[2] * temp[2] * temp[2])
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
