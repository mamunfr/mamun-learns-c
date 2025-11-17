#include<stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a , &b);

    strcpy(a,b); //b er string, a tew copy kore rakhe.
                 //eita ekta built in fuction, ager strlen er moto
    printf("%s %s", a , b);
    return 0;
}