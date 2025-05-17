#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 4 == 0 || n % 7 == 0)
    {
        if (n == 0)
        {
            printf("NO\n");
            return 0;
        }
        printf("YES\n");
    }
    else if(n % 10 == 4 || n % 10 == 7 || n % 10 == 0)
    {
        printf("YES\n");
    }
    else if(n % 100 == 47 || n % 100 == 74 || n % 100 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}