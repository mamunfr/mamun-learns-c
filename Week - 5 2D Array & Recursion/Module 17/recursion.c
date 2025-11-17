//je function nijei nijeke call kore, takei recursive function bole

#include<stdio.h>

void hello()
{
    printf("Hello\n");
    hello();
}

int main()
{
    printf("Hello\n");
    hello();
    return 0;
}

//this whole process is called recursion

//IF i run this, it will end up going in infinite loop
//to stop that, ctrl+c 
//It maintains stack and call stack.
//if memory gets full, it says stack overflow