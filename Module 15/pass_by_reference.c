#include<stdio.h>
void fun(int* x)
{
    *x=20;
} 
int main()
{
    int a=10;
    fun(&a); // Pass the address of a to the function
    printf("%d\n", a); // This will print 20, not 10
    return 0;
}