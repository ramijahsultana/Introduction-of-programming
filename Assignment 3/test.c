#include<stdio.h>
#include<string.h>
int main()
{   
    char s[1001];
    scanf("%s", &s);
    
    int n = strlen(s);

    for(int i=1; i<=n/2; i++)
    {
        // printf("%c\n", s[i-1]);
        // printf("%c\n", s[n-i]);
        if(s[i-1] != s[n-i])
        {
           return 0;
            
        }
        else
        {
            return 1;
        }
       
    }
    return 0;
}

