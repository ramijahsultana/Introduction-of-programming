#include<stdio.h>
int main()
{
    int n;
    int x;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
            even++;
        else
            odd++;
        if (x > 0)
            pos++;
        else if (x < 0)
            neg++;
    }
    printf("Even: %d\n Odd: %d\n Positive: %d\n Negative: %d\n", even, odd, pos, neg);

    return 0;
}