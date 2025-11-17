#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool is_jaduMatrix = true;

    if( r != c)
    {
        is_jaduMatrix = false;
    }

    if (r == c)
    {

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j || i + j == r - 1)
                {
                    if (a[i][j] != 1)
                    {
                        is_jaduMatrix = false;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_jaduMatrix = false;
                    }
                }
            }
        }
    }

    if (is_jaduMatrix == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}