// #include<stdio.h>
// int main()
// {
//     int a[3][4]; //Size dite hoy 2 ta, row and column like matrices
//     a[2][3] = 10; //For accessing u also need row and column, 1D array te ekta index ditam
//                 //Ekhon 2 ta index dite hobe
//     printf("%d", a[2][3]);
//     return 0;
// }


//2D Array input and output

#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    scanf("%d", &a[0][0]);
    scanf("%d", &a[0][1]);
    scanf("%d", &a[0][2]);
    scanf("%d", &a[1][0]);
    scanf("%d", &a[1][1]);
    scanf("%d", &a[1][2]);
    scanf("%d", &a[2][0]);
    scanf("%d", &a[2][1]);
    scanf("%d", &a[2][2]);

    printf("%d ", a[0][0]);
    printf("%d ", a[0][1]);
    printf("%d ", a[0][2]);
    printf("%d ", a[1][0]);
    printf("%d ", a[1][1]);
    printf("%d ", a[1][2]);
    printf("%d ", a[2][0]);
    printf("%d ", a[2][1]);
    printf("%d ", a[2][2]);

    return 0;
}