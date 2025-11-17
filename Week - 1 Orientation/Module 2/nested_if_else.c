#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox'sbazar jabo\n");
        if (tk >= 10000)
        {
            printf("Saint Martin Jabo\n");
        }
        else
        {
            printf("Cox'sbazar theke chole asbo\n");
        }
    }

    else
    {

        printf("Kothao jabo na\n");
    }
}