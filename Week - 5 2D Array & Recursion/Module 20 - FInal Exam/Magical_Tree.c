#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int rows = n / 2 + 6;
    int space = rows - 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }

    int rows2 = 5;
    int star2 = n;
    int space2 = (star - 2 - star2)/2;

    for(int i = 1; i <= rows2; i++)
    {
        for(int k = 1; k <= space2; k++)
        {
            printf(" ");
        }
        for(int j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}