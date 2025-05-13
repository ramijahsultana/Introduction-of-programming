#include<stdio.h>
int ar(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i<n)
        {
            printf("%d ", i);
        }
        else if(i==n)
        {
            printf("%d", i);
        }
        
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    ar(n);
    
    return 0;
}