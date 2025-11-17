#include<stdio.h>

//its like stack of chair in family function
//after the work of one function finishes, it return to where it got called from

void mello()
{
    printf("Hello Hello Hello Hello Hello\n");
}

void gello()
{
    printf("Hi Hi Hi Hi\n");
    mello();
}

void hello()
{
    printf("Hey Hey Hey\n");
    gello();
}

int main()
{
    printf("Hellow\n");
    hello();
    return 0;
}