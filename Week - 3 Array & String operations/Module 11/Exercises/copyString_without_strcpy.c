#include<stdio.h>
int main()
{
    char s1[101], s2[101];
    scanf("%s %s", &s1 , &s2);
    int s2_length = strlen(s2);
    for(int i = 0; i <= s2_length; i++)
    {
        s1[i] = s2[i];
    }

    printf("%s %s", s1 , s2);
    return 0;
}