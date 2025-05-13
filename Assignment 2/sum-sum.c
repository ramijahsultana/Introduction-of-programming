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
   
      int sum_positive = 0, sum_negative = 0;
        for(int i = 0; i < n; i++)
        {   if(a[i] > 0)
            {
            sum_positive = sum_positive + a[i];
            }
            if(a[i] <= 0)
            {
                sum_negative = sum_negative + a[i];
            }
            
        }
    
        printf("%d ", sum_positive);
        printf("%d ", sum_negative);
    

    return 0;
}