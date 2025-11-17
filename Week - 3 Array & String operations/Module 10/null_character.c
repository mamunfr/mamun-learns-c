#include<stdio.h>
int main()
{
    char s[10]; //jehetu string always input er por null char bosay
                //tai string niye kaj korar somoy at leas size ek ghor beshi rakhte hoy
    printf("%d\n", s[4]); //Garbage value
    scanf("%s", &s);
    printf("%s\n", s);
    printf("%d\n", s[4]); //Ascii value of null character
    return 0;
}