#include <stdio.h>
#include <limits.h>

int big = INT_MIN;
int small = INT_MAX;
void findMax(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
        }
    }
    printf("%d", big);
}

void findMin(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    printf("%d ", small);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    findMin(a, n);
    findMax(a, n);
    return 0;
}