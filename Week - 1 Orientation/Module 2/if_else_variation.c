#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox'sbazar jabo\n");
    }

    if (tk >= 6000)
    {
        printf("Sazek jabo\n");
    }

    if (tk >= 8000)
    {
        printf("Sundarban jabo\n");
    }

    else
    {
        printf("Hello\n");
    }

    return 0;
}