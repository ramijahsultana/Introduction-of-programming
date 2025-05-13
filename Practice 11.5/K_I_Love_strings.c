#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int s[50], t[50];
   
    // for(int i = 0;i < 50;i++)
    // {
    //     scanf("%s\n %s\n",&s, &t);
    // }
    fgets(s,50,stdin);
    int a, b;
    int length_a = strlen(a);
    int length_b = strlen(b);
    int c[length_a  + length_b];
    for(int i=0, j=0;i<length_a, j<length_b; i++, j++)
    {
        
        c[i]=a[i];
        c[i]=b[j];

    }

    


    return 0;
}