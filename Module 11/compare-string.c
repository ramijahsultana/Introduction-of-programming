#include<stdio.h>
int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);

    int val = strcmp(x, y);

    if(val = 0)
    {
        printf("%s", x) || printf("%d", y);
    }
    if(val < 0)
    {
        printf("%s", x);
    }
    if(val > 0)
    {
        printf("%s", y);
    }



    return 0;
}