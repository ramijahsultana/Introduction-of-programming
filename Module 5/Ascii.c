#include<stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if(X>='a' && X<='z')
    {
       X = X - 32;
       printf("%c\n", X);
    }
    else
    {
        X = X + 32;
       printf("%c\n", X);
    }

    return 0;
}