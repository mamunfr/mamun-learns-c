#include <stdio.h>
int main()
{
    char s[10];
    scanf("%s", &s); // string er super power, loop charai o pura
                     // string input nite pare , output o dey %s specifier er karone
    printf("%s", s); // after string input, string automatically put null char /0 in the
                     //  after input index. thats why printf understand null er age print korte hobe.
    printf("%d", s[5]); // ASCII of null char is 0 in any compiler
    return 0;
}