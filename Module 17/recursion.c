#include<stdio.h>
void hello()
{
    printf("hello\n");
    hello();
}
int main()
{
    printf("hiii\n");
    hello();
    return 0;
}