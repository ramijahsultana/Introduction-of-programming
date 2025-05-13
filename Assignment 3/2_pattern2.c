#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num = 1;
    int space = n-1;
    for(int i=1; i<=n; i++) // print rows
    {
        for(int j=1; j<=space; j++) // Print spaces
        {
            printf(" ");
        }
        for(int j =num; j>=1; j--) // Print numbers
        {
            printf("%d", j);
        }
    
        num++;
        space--;
        printf("\n");
    }
    return 0;
}