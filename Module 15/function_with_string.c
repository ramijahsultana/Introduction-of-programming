#include<stdio.h>
#include<string.h>
void fun(char n[])
{    
        printf("%s\n", n);
        printf("%d\n",strlen(n));
    
}
int main()
{
    char n[10];
    scanf("%s", &n);
    
    
    fun(n);
    return 0;
}