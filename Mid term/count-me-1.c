#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int count1 = 0;
    int count2 = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%2 == 0)
        {
            count1++;
        }
    
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%3 == 0 && a[i]%2 !=0)
        {
            count2++;
        }
    
    }
    printf("%d %d ", count1, count2);

    return 0;
}