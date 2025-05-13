#include<stdio.h>
void print_num(int n, int i)
{
    if(i > n)
    {
        return 0;
    }
    print_num(n, i+1);
    printf("%d ", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i =1;
    print_num(n,i);
    return 0;
}