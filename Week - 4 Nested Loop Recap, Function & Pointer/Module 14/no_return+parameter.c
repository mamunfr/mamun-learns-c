#include <stdio.h>

void sum(int x, int y) //void, meaning no return
{

    int ans = x + y;
    //return;  //just return deya jabe but kunu value return kora jabe na
    printf("%d", ans);
}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    //printf("Hello"); //return hoye ei line e chole ase

    return 0;
}
