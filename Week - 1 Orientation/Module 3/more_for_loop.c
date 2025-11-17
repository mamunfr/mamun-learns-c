#include<stdio.h>
int main()
{
    //for(int i = 4; i <= 100; i+=4)//4 er gunitok
    //for(int i = 7; i<=100; i+=7)//7 er gunitok
    //for(int i = 100; i >= 1; i--) //Reverse Printing
    for(int i = 2; i <= 64; i*=2)//2,4,8,16,32 eivabe barbe
    {
        printf("%d\n",i);
    }
}