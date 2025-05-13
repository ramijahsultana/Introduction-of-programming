#include<stdio.h>
void print_even_indices(int a[], int n, int i)
{
   if(a[i]%2 != 0)
   {
    return 0;
   } 
   print_even_indices(a, n, i+1);
   printf("%d ", i);

}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = 0;
    print_even_indices(a, n, 0);
    return 0;
}