#include<stdio.h>
int arr(int n, int a[])
{   
    for(int i=0; i<n; i++)
    {
        for(int j=n; j<n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

}
int main()
{
   int n;
   scanf("%d", &n);
   int a[n];
   for(int i=0; i<n; i++)
   {
    scanf("%d", &a[i]);
   }
   arr(n, a);

    return 0;
}