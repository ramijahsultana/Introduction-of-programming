#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("even number\n");
        }
        else if (i % 3 == 0)
        {
            printf("divisible by 3");
        }
        else
            (i % 2 == 1);
            {
                printf("odd number");
            }
    }

    return 0;
}
