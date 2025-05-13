#include<stdio.h>
int main()
{
    char s[100001];
    scanf("%s", &s);
    
    int count;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
            count++;
        }
    }
    
        printf("%d ", count);
    
    

    return 0;
}