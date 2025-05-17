#include <stdio.h>
int max(int n, int a[], int i)
{
    if (i == n - 1)
    {
        return a[i];
    }

    int mx = max(n, a, i + 1);
    if (mx < a[i])
    {
        mx = a[i];
    }
    return mx;

}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ans = max(n, a, 0);
    printf("%d\n", ans);
    return 0;
}