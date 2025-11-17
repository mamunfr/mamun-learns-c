#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", s);

        int sz = strlen(s);

        if (sz <= 10)
        {
            printf("%s\n", s);
        }

        else if (sz > 10)
        {
            printf("%c", s[0]);
            int count = 0;
            for (int i = 1; i < sz - 1; i++)
            {
                count++;
            }
            printf("%d", count);

            printf("%c\n", s[sz - 1]);
        }
    }
}
