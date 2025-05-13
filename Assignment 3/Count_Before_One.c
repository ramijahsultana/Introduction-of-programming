#include<stdio.h>
int count_before_one(int arr[], int n)
{
    int count =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
        if(arr[0] == 1)
        {
            count = 0;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = count_before_one(a, n);
    printf("%d ", count);

    return 0;
}