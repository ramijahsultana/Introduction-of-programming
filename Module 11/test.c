// #include<stdio.h>
// int main()
// {   int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i = 0; i < n; i++)
//     {   
//         scanf("%d", &ar[i]);
        
//     }
//     for(int i = 0; i < n; i++)
//     {   
//         printf("%d ", ar[i]);
        
//     }
    
//     return 0;
// }









#include<stdio.h>
#include<string.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);
    int i = 0;
    while(1)
    {
        if(a[i] == '\0' && b[i] == '\0')
        {
            printf("%s", a[i] || b[i]);
            break;
        }
        else if(a[i] = '\0')
        {
            printf("%s", a[i]);
            break;
        }
        else if(b[i] = '\0')
        {
            printf("%s", b[i]);
            break;
        }
        else if(a[i] < b[i])
        {
            printf("%s", a[i]);
            break;
        }
        else if(a[i] > b[i])
        {
            printf("%s", b[i]);
            break;
        }
        else if(a[i] = b[i])
        {
            i++;
        }

    } 

    return 0;
}