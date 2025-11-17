//main function theke patanu value, onno function e change korle
//newly changed value main e recieve korar jonno we send pointer, to store address
//jeita pass by value diye hoito na

#include<stdio.h>

void fun(int* p)
{
    *p = 20;
}

int main()
{
    int x = 10;
    fun(&x);
    printf("%d", x);
    return 0;
}