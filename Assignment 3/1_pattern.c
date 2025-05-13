#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int pattern_1 = 1;
    int space_1 = n-1;
    for (int i=1; i<=n; i++)
    {
        for(int j=1; j<=space_1; j++)
        {
            printf(" ");
        }
        for(int j=0; j<pattern_1; j++)
        {
            if(i%2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        pattern_1 += 2;
        space_1 --;
        printf("\n");
       
    }
    if(n!=1)
    {
        int pattern_2 = pattern_1-5;
        int space_2 = 1;
    for (int i=n+1; i<=(n*2)-1; i++)
    {
        for(int j=1; j<=space_2; j++)
        {
            printf(" ");
        }
        for(int j=0; j<=pattern_2; j++)
        {
            if(i%2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        pattern_2 -= 2;
        space_2++;
        printf("\n");
       
    }
    }
    

    return 0;
}