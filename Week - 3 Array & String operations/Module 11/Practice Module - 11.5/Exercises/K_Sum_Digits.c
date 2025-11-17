#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1000001], s2[10];
    scanf("%s %s", &s1, &s2);
    int length = strlen(s2);

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += s2[i] - 48;
    }

    printf("%d", sum);

    return 0;
}