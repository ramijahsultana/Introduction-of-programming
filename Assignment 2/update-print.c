#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        
    }
    
    int x;
    scanf("%d", &x);
    int v;
    scanf("%d", &v);
    for(int i = 0; i < n; i++)
    {
        if( x == i)
        {
            a[i]=v;
            
        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }



    return 0;
}