#include<stdio.h>
int main()
{
    int a=10;
    printf("%d\n", a);
    printf("%p\n", &a);

    int* ptr;
    ptr = &a;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    return 0;
}