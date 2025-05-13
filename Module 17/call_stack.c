#include<stdio.h>
void mello()
{
    printf("melloo\n");
    
}
void hola()
{
    printf("holaaa\n");
    mello();
}
void hello()
{
    printf("hello\n");
    hola();
}
int main()
{
    printf("hiii\n");
    hello();
    return 0;
}