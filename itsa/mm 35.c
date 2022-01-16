#include<stdio.h>

int main()
{
    int a;
    while(scanf("%d",&a) != EOF)
    {
        if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
        {
            printf("Bissextile Year\n");
        }
        else
        {
            printf("Common Year\n");
        }
    }
}

