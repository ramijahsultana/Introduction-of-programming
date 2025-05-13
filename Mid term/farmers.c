#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int M1, M2, D;
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d %d", &M1, &M2, &D);
        int D1 = 0;
        if (M2 == 0)
        {
            printf("%d\n", D1);
        }
        else
        {
            D1 = D - ((M1 * D) / (M1 + M2));
            printf("%d\n", D1);
        }
    }
    return 0;
}