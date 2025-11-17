//eikhane normally when we send 
//value to other function-> pass by value hishebe jay
//array to other function -> pass by reference hishebe jay by default
//array jodi pass by value hoye jaito amader onek memory loss hoito, tai developer ra
//array k pass by reference hishebe rakhsen

//normal array function theke return kora jay na

#include<stdio.h>

void fun(int a[], int n) //array er sathe size o pass kora lage
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    fun(a, n); //size o pass kora lage
    return 0;
}






// #include <stdio.h>

// void fun(int a[])
// {

//     a[1] = 200;
// }

// int main()
// {
//     int a[5] = {10, 20, 30, 40, 50};
//     fun(a);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }