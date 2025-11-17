#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10001];
        scanf("%s", &s);
        int length = strlen(s);
        int cnt[3] = {0};
        for (int i = 0; i <= length; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cnt[0]++;
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                cnt[1]++;
            }
            if(s[i] >= '0' && s[i] <= '9')
            {
                cnt[2]++;
            }
        }

        printf("%d %d %d\n", cnt[0], cnt[1], cnt[2]);
    }
    return 0;
}