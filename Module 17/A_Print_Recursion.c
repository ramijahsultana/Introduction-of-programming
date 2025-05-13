#include<stdio.h>
void print_recursion(int n, int i)
{
    if(i > n)
    {
        return 0;
    }
    printf("I love Recursion\n");
    print_recursion(n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    print_recursion(n,i);
    return 0;
}