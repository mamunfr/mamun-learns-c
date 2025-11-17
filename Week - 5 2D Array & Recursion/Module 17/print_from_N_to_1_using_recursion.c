#include<stdio.h>

void hello(int i)
{
    if(i == 0)       //end condition
    {
        return;
    }

    printf("%d\n", i);
    hello(i-1);    //increment/decrement
}
int main()
{
    hello(5);    //initialization
    return 0;
}

//so, its also similar to loop

//say, to print 1 to 5, using loop
//for(int i = 1; i <= 5; i++)

//to print 5 to 1, using loop
//for(int i = 5; i < 0; i--)
