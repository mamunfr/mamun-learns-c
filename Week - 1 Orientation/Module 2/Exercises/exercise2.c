//Take a number from user and check if its a positive or negative number.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n > 0)
    {
        printf("Its a positive number\n");
    }

    else if( n < 0)
    {
        printf("Its a negative number\n");
    }

    else 
    {
        printf("Zero\n");
    }
}