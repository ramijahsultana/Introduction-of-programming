#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 48 && ch <= 57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        if (ch >= 'a' && ch <= 'z')
        {
            printf("ALPHA\nIS SMALL\n");
        }
        else
        {
            printf("ALPHA\nIS CAPITAL\n");
        }
    }

    return 0;
}


