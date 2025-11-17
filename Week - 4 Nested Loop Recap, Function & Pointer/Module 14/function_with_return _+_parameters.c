#include<stdio.h>

//stack memory and heap memory->

// return_type function_name(parameters) 
// {

//     return;
// }

int sub(int num1, int num2) //main function er upore thakbe always
{
    int ans = num1 - num2;
    return ans;
}

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int val1 = sum(a, b);
    int val2 = sub(a, b);

    // int val = sum(10, 5);
    // int val2 = sub(1000, 500);
    printf("%d %d", val1, val2);
    return 0;
}