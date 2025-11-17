#include<stdio.h>
int main()
{
    int a; //4 byte
    float f; // 4 byte
    char c; // 1 byte
    scanf("%d %f %c", &a, &f, &c);
    printf("%d %.2f %c", a , f, c);

    return 0;
}