#include<stdio.h>

int x = 20; //Globally declared variable, accessible from any function
int sum()
{
    printf("Sum -> %d", x);
}
int main()
{
    printf("Main -> %d\n", x);
    sum();
    return 0;
}