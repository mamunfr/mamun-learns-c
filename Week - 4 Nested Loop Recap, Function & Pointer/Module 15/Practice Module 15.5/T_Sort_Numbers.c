#include <stdio.h>
int main()
{
    int n = 3;
    int a[n], original[n];;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        original[i] = a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", original[i]);
    }

    return 0;
}