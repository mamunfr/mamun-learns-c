#include<stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a + b;
    return res;
}
int main()
{
    int val = sum();
    printf("%d", val);
    return 0;
}
