#include<stdio.h>

void fun(char s[], int n)
{
    printf("%s\n", s);
    //printf("%d\n", strlen(s));
}

int main()
{
    char s[10];
    scanf("%s", s); //as string is an array tai reference sign or & ampercent deya lage na
    fun(s, 10);
    //fun(s, 10); //size pathanu mandatory na, as strlen diye ber kora jay
    return 0;
}