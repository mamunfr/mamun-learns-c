//string is array of character. we dont call it character array because it has 
//some super power.
#include<stdio.h>
int main()
{
    char a[4];
    for(int i = 0; i < 4; i++)
    {
        scanf("%c", &a[i]);
    }

    for(int i = 0; i < 4; i++)
    {
        printf("%c\n", a[i]);
    }
    return 0;
}