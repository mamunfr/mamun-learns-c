#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d", &r);
    c = r;
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum_primaryDiagonal = 0;
    int sum_secondaryDiagonal = 0;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    sum_primaryDiagonal += a[i][j];
                }
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                {
                    sum_secondaryDiagonal += a[i][j];
                }
            }
        }
    }

    printf("%d", abs(sum_primaryDiagonal - sum_secondaryDiagonal));
    return 0;
}