#include<stdio.h>

void hello(int i)
{
    if(i == 6) //ei function print howar agei stoop kore disi
               //Na hole infinite loop e pore jeto, we just controlled recursion
    {
        return;
    }
    printf("%d\n", i);
    hello(i+1);
}
int main()
{
    int i = 1;
    hello(i);
    return 0;
}