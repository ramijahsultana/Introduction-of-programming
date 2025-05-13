#include<stdio.h>
int main()
{ int a;
    scanf("%d",&a);
    int sum = 0;
    for(int i = 1; i <=10; i++)
    {
        sum += a;
    }
 printf("%d\n",sum);
    return 0;
}