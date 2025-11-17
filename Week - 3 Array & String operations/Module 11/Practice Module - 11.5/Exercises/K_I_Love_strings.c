#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s1[51], s2[51], result[105];
        scanf("%s %s", &s1, &s2);
        int s1_length = strlen(s1);
        int s2_length = strlen(s2);
        int k = 0;
        for (int i = 0; i < s1_length || i < s2_length; i++)
        {
            if (i < s1_length)
            {
                result[k] = s1[i];
                k++;
            }

            if (i < s2_length)
            {
                result[k] = s2[i];
                k++;
            }
        }

        result[k] = '\0';

        printf("%s\n", result);
    }
    return 0;
}