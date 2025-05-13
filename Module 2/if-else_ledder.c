#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 100)
    {
        printf("burger khabo\n");
    }
    else if(tk >= 50)
    {
        printf("Fuchka khabo\n");
    }
    else 
    {
        printf("kichu khabo na\n");
    }
    return 0;
}