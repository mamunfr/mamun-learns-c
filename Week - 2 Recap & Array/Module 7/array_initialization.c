#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40}; //declare and initialization
    //int a[5] = {10} //baki 4 ta ghor e by default 0 bosbe
    //int a[5] = {0} //all 5 elements will be zero. ekta array k ek line e sob gula zero kore felte parii
                     //it only works with fixed size, not with user input
    for(int i = 0; i < 4; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}