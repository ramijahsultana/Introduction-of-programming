#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star_1=1;
    int space_1=n-1;
    for(int i=1; i<=n; i++)
    {
        
        for(int j=1; j<=space_1; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star_1; j++)
        {
            printf("*");
        }
        printf("\n");
        star_1+=2;
        space_1--;
    }
    int star_2=star_1-2;
    int space_2=0;
    for(int i=1; i<=n; i++)
    {
        
        for(int j=1; j<=space_2; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star_2; j++)
        {
            printf("*");
        }
        printf("\n");
        star_2-=2;
        space_2++;
    }
    return 0;
}