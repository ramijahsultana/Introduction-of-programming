#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int fact=1;
        for (int j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
        printf("%d\n", fact);
    }
    
    return 0;
}