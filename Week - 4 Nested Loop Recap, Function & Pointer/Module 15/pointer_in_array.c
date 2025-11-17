//Array er nam ekta pointer hishebe kaj kore and
//eti arr er 0th index er address k store rakhe

#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30,40, 50};
    //printf("Array er 0th index er address: %p\n", &a[0]);
    //printf("Array er nam: %p\n", a);
    //printf("%p\n", *a); //Deferencing, as array work as a pointer
                       //pointer k deference korle value print hobe

    *a = 100; //Value change by dereferenciing
    *(a+1) = 200;
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);
    return 0;
}