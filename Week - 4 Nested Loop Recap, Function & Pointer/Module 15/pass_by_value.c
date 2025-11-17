#include<stdio.h>

void fun(int x)
{
    x = 20;
    printf("Fun function er address: %p\n", &x);
}
int main()
{
    int x = 10;
    fun(x);
    printf("Main function er address: %p\n", &x);
    printf("%d", x);
    
    return 0;
}