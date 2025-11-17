#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001], s2[100001];
    scanf("%s", &s);
    int length = strlen(s);
    int cons_cnt = 0;
    int i = 0;
    while (i < length)
    {

        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            cons_cnt++;
        }

        i++;
    }

    printf("%d", cons_cnt);
    
    return 0;
}