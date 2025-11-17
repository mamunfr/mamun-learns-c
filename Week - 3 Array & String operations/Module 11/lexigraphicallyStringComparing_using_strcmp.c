#include<stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    //printf("%d", strcmp(a,b)); //we can use that if we can understand from returned value
    //strcmp integer value return kore
    // -1/neg  means a is smaller
    // 0 means a = b;
    //1/positive means b is smaller

    int val = strcmp(a, b);
    if(val < 0)
    {
        printf("A is smaller");
    }
    else if( val == 0)
    {
        printf("Equal");
    }
    else if( val > 0)
    {
        printf("B is smaller");
    }

    return 0;
}