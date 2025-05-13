#include<stdio.h>
int sum(int val_1,int val_2)
{
    int ans = val_1 + val_2;
    return ans;

}

int main()
{   
    // int val=sum(10,5);
    int val_1,val_2;
    scanf("%d %d",&val_1,&val_2);

    printf("%d", sum(val_1,val_2));
    return 0;
}
