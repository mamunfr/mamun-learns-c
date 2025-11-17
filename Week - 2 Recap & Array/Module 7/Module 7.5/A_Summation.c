#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0;  i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long int sum = 0;

    for(int i = 0;  i<=n-1; i++)
    {
        sum = sum + a[i];
    }

    printf("%lld\n", llabs(sum)); //format specifier for abs depends on data type


    return 0;
}