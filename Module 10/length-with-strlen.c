#include<stdio.h>
int main()
{
    char s[50];
    // scanf("%s", &s);
    fgets(s, 25, stdin);

    printf("%d", strlen(s));

    return 0;
}