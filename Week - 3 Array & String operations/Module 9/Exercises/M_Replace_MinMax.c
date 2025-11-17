#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX;
    int minIndex;

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            minIndex = i;
        }
    }

    int max = INT_MIN;
    int maxIndex;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            maxIndex = i;
        }
    }

    int tmp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = tmp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}