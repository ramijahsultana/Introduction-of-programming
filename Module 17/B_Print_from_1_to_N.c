#include<stdio.h>
void print_num(int n, int i)
{
    if(i > n)
    {
        return 0;
    }
    printf("%d\n", i);
    print_num(n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i =1;
    print_num(n,i);
    return 0;
}