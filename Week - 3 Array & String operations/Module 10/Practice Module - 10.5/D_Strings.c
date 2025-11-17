#include<stdio.h>
#include<string.h>
int main()
{
    char s1[11];
    char s2[11];

    scanf("%s", s1);
    scanf("%s", s2);

    int s1_length = strlen(s1);
    int s2_length = strlen(s2);

    printf("%d %d\n", s1_length, s2_length);

    printf("%s", s1);
    printf("%s\n", s2);

    char tmp = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp;

    printf("%s %s\n", s1, s2);

    return 0;
}