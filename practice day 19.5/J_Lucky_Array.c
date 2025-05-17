#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mini = a[0];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (mini > a[i])
        {
            mini = a[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (mini == a[i])
        {
            cnt++;
        }
    }
    if(cnt%2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}