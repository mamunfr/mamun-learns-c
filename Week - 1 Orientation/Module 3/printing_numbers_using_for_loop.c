#include<stdio.h>
int main()
{
    //for(int i = 1; i<=10; i++) //Print natural numbers
    for(int i = 2; i <= 10; i+=2) //Print even numbers
    //for(int i = 1; i <= 10; i+=2)//print odd Numbers
    {
        printf("%d\n", i);
    }

    return 0;
}