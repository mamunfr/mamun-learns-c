#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int a;
    int i = 1;
    while (i <= t)
    {
        scanf("%d", &a);
        i++;

        long long int fact = 1;

        for (int i = 1; i <= a; i++)
        {
            fact = fact * i;
        }

        printf("%lld\n", fact);
    }
    return 0;
}