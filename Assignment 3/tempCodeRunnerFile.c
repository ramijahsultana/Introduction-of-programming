#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int n = strlen(s);
    for(int i=1; i<=n/2; i++)
    {
        if(s[i-1] != s[n-i])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    
    char s[1001];
    scanf("%s", &s);
    is_palindrome(s);
    if(is_palindrome(s) == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}