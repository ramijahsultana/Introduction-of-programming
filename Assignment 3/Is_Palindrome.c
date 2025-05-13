#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int n = strlen(s);
    if (n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                return 0;
            }
            
        }
    }
    return 1;
}
int main()
{

    char s[1001];
    scanf("%s", &s);
    is_palindrome(s);
    if (is_palindrome(s) == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}