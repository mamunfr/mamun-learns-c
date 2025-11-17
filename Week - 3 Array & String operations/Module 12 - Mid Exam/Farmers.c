#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {

        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int total_kaj = m1 * d;
        int notundays = total_kaj / (m1 + m2);
        int kom_lagbe = d - notundays;

        printf("%d\n", kom_lagbe);
    }
    return 0;
}