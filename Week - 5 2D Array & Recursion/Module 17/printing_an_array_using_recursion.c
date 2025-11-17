#include<stdio.h>

void print_array(int a[],int n, int i) //sudhu, array and size nile hobe na, index o nite hobe
{
    if(i == n) //jeikhane giye thambo, seita theke 1 beshi dite hobe.
               //However, array te size 5 thaka mane, index 4 porjonto
               //tai amra direct size niye nisi, 1 baranu lage nai
    {
        return;
    }

    printf("%d\n", a[i]); //eikhane amra, index print korte chaile sudhu i ditam
                          //jehetu i index er value print korbo tai a[i];
    print_array(a, n, i+1); //index 1 kore baraitesi
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

    print_array(a, n, 0); //array first index start from 0
    return 0;
}