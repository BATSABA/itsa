#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int a;
    int *b;
    int i;
    while(scanf("%d", &a) != EOF)
    {
        b = (int*)malloc(a * sizeof(int));
        for(i = 0;i < a;i ++)
        {
            scanf("%d", &b[i]);
        }
        qsort(b, a, sizeof(int), compare);
        for(i = 0;i < a;i ++)
        {
            printf("%d\n", b[i]);
        }
    }
}
