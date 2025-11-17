#include<stdio.h>
#include<stdbool.h>
int main()
{
    char s1[21], s2[21];
    scanf("%s %s", &s1, &s2);
    int i = 0;
    while (true)
    {
        if (s1[i] == '\0' && s2[i] == '\0')
        {
            printf("%s", s1);
            break;
        }
        else if (s1[i] == '\0')
        {
            printf("%s", s1);
            break;
        }
        else if (s2[i] == '\0')
        {
            printf("%s", s2);
            break;
        }
        else if (s1[i] < s2[i])
        {
            printf("%s", s1);
            break;
        }
        else if (s1[i] > s2[i])
        {
            printf("%s", s2);
            break;
        }
        else if (s1[i] == s2[i])
        {
            i++;
        }
    }

    return 0;
}