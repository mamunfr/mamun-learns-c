#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int first_digit = (a/1000); //int k int diye divide korle c program int value niye ney, decimal portion ney na
                                //last theke bad dite chaile simply mod korte hobe. first theke bad dite chaile vag korte hobe
    if(first_digit%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}