#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long final = m;
        long long int mulOfRest = a * b * c;

        if(final % mulOfRest != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", m / mulOfRest);
        }
    }

    return 0;
}