#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    
    for(int i = 0; i < r; i++)
    {
        for(int i = 0; i < c; i++)
        {
            scanf("%d", &a[r][c]);
        }
    }

    if(r == 1)
    //if(c == 1) //column matrix
    //if(r == c) //square matrix
    {
        printf("This is a row matrix");
    }
    else
    {
        printf("This is a column matrix");
    }
    return 0;
}