#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c = a%10;
    int d = a/10;

    if(c%d==0 || (d%c == 0 && c != 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}