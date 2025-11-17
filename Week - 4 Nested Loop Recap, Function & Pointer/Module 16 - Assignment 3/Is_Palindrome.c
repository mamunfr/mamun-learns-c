#include <stdio.h>
#include <string.h>

int is_palindrome(char w[])
{
    int length = strlen(w);
    int i = 0;
    int j = length - 1;
    int isPalindrome = 1;

    while (i < j)
    {
        if (w[i] != w[j])
        {
            isPalindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (isPalindrome == 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    char s[1000];
    scanf("%s", s);

    //  for (int i = 0; s[i] != '\0'; i++)
//     {
//         if (s[i] >= 'A' && s[i] <= 'Z') //uppercase to lower case
//         {
//             s[i] = s[i] + 32;
//         }
//     }

    int result = is_palindrome(s);
    if (result == 1)
    {
        printf("Palindrome\n");
    }

    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}