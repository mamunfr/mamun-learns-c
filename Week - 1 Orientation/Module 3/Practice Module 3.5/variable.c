#include<stdio.h>
int main()
{
    int a; 
    long long int b;
    double f;
    char c;

    scanf("%d %lld %lf %c", &a , &b , &f , &c);
    printf("%d\n%lld\n%.2lf\n%c\n" , a, b, f, c);
    return 0;
}




/* #include<stdio.h>
int main()
{
    int a;
    long long int b;
    float f; 
    char c;

    scanf("%d\n",&a);
    scanf("%lld\n",&b);
    scanf("%f\n",&f);
    scanf("%c",&c);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%.2f\n", f);
    printf("%c", c);

    return 0;

} */