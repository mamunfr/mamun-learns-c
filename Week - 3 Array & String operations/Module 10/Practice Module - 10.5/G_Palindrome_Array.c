#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int isPalindrome = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n/2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}