#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[1024];
    int len;
    int head;
    int tf;
    while(scanf("%s", str) != EOF)
    {
        len = strlen(str);
        head = 0;
        tf = 0;
        while(head < len - 1)
        {
            if(str[head] != str[len - 1])
            {
                tf = 1;
                break;
            }
            head ++;
            len --;
        }
        if(tf == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
