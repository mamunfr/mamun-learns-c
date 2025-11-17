#include<stdio.h>
int main()
{
    /*
    int a = 10000000000;
    printf("%d", a); //output will be garabage value as it exceded 10 to the power 9 */

    /*
    long long int a = 10000000000;
    printf("%lld", a); //it has different format specifier And it can hold upto 10 to the power 18.  which means 1 er pore 18 ta 0 */


    /*
    float f = 2134.5678;
    printf("%f", f); // It gives garbage value means it has limitation . Point soho 8-9 ta digit nite pare*/

    double f = 2134.56789231;
    printf("%lf", f);


    return 0;
}