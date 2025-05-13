// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1000001];
//     scanf("%s", &s);
//     printf("%d", s);
//     int fre[26] = {0};
//     for(int i=0; i<s; i++)
//     {
//         int val = s[i];
//         fre[val]++;
//     }
//     for(int i = '97'; i <= '122';i++)
//     {
//         printf("%c",i);
//     }
//     return 0;
// }




#include<stdio.h>
int main()
{   char a[1000001];
    scanf("%s", &a);
    
    for (int i=97; i<=122; i++)
    {
        if(i==a)
        {
            printf("%c", i);
        }
    }

    return 0;
}
