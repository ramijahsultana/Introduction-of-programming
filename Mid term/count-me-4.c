#include <stdio.h>
int main()
{
    char s[10001];
    scanf("%s", &s);
    char ch;
    for (int i = 97; i <= 122; i++)
    {
        ch = i;
        int count = 0;
        for (int j = 0; j < strlen(s); j++)
        {

            if (s[j] == ch)
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("%c - %d \n", ch, count);
        }
    }

    return 0;
}
