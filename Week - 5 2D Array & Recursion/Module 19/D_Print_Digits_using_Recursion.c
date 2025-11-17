// kunu no. k 10 diye mod korle we get the last digit
// sei no k abar 10 diye vag korle we delete last digit
// module 6 e explanation ase valo bhabe

//corner case 0 er jonno run korbe na, so use do while

// Always break the problems into smaller part, step by step


#include <stdio.h>

void rec(int n)
{
    if (n == 0)
    {
        return;
    }

    rec(n / 10);
    int last_digit = n % 10;
    printf("%d ", last_digit);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if(n == 0)
        {
            printf("0");
        }
        rec(n);
        printf("\n");
    }

    return 0;
}