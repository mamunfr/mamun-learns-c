#include<stdio.h>

void hello(int i)
{
    if(i==6)
    {
        return;
    }

    hello(i+1);
    printf("%d\n", i); //just printf ta niche
}

int main()
{
    hello(1);
    return 0;
}