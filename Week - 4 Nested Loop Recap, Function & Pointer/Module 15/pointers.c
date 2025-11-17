//poiinter - onno variable er address store kore
//pointer 8 byte jayga ney 64 bit e
//mutamuti 4 byte ney 32 bit e

//val -> address = reference
//address -> value = dereference

#include<stdio.h>
int main()
{
    int x = 100;
    printf("%d\n", x); //printing normal value
    printf("%p\n", &x);//printing x's address, different format specifier

    // int* ptr = &x; //pointer variable
    // printf("%p\n", ptr); //address of the x, going on location
    // printf("%d", *ptr);//De referencing //value of x based on location
    //printf("%p", &ptr); //address of the pointer

    int* ptr;
    ptr = &x;
    *ptr = 200;
    printf("%d\n", x);
    return 0;
}