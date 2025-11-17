#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n); //user deciding input
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = n-1; i >= 0; i--) //reverse printing of an array
    {
        printf("%d ",a[i]);
    }
    return 0;
}