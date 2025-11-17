#include<stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld",&a,&b,&c, &d);
    if( d == a + b -c || d == a + b * c||d == a-b+c || d == a-b*c || 
     d == a*b+c || d == a*b-c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    

    return 0;
}