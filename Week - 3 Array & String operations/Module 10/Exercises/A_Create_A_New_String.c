#include<stdio.h>
int main()
{
    char s[1001];
    char a[1001];

    scanf("%s", &s);
    scanf("%s", &a);

    int sz_s = strlen(s);
    int sz_a = strlen(a);

    printf("%d %d\n", sz_s, sz_a);
    printf("%s %s", s , a);
    return 0;
}