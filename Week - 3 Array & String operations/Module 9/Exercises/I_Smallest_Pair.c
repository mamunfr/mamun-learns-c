#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int min = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = a[i] + a[j] + (j - i);
                if (min > sum)
                {
                    min = sum;
                }
            }
        }

        printf("%d\n",min);
    }
    return 0;
}