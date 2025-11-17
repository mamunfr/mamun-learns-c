#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int length = strlen(s);
    int i = 0;
    int j = length - 1;
    int isPalindrome = 1;
    while(i < j)
    {
        if(s[i] != s[j])
        {
            isPalindrome = 0;
        }

        i++;
        j--;
    }

    if(isPalindrome == 1)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }
    return 0;
}