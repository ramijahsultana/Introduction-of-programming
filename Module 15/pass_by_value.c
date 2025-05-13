#include<stdio.h>

void fun(int x)
{
    x=20;
    
}

int main()
{
    int x=10;
    fun(x);
    printf("%d\n", x); // This will print 10, not 20
    // This is because the function fun() takes x by value, not by reference.

    return 0;
}