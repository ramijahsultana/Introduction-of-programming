#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N > 20)
    {
        for (int i = 21; i <= N; i++)
        {
           
            if (i % 3 == 0  &&  i % 7 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}



