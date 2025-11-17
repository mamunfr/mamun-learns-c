#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int i = 1;
    while (i <= t)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        i++;
        int odd_sum = 0;
        if (x > y)
        {
            for (int i = y+1; i <= x-1; i++)
            {
                if (i % 2 == 1)
                {

                    odd_sum += i;
                }
            }
        }

        if (x < y)
        {
            for (int i = y-1; i >= x+1; i--)
            {
                if (i % 2 == 1)
                {
                    odd_sum += i;
                }
            }
        }

        printf("%d\n", odd_sum);
    }
    return 0;
}