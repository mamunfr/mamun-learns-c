// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int hash = 1;
//     int space = n - 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int s = 1; s <= space; s++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= hash; j++)
//         {
//             if (i % 2 == 1)
//                 printf("#");
//             else
//                 printf("-");
//         }

//         printf("\n");

//         hash += 2;
//         space--;
//     }

//     int hash2 = hash-4;
//     int space2= 1;

//     for (int i = 1; i <= n - 1; i++)
//     {
//         for (int s = 1; s <= space2; s++)
//         {
//             printf(" ");
//         }

//         int remlines = n+i;

//         for (int j = 1; j <= hash2; j++)
//         {
//             if (remlines % 2 == 1)
//                 printf("#");
//             else
//                 printf("-");
//         }

//         printf("\n");

//         hash2 -= 2;
//         space2++;
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int hash = 1;
    int space = n - 1;

    // Top half
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= space; s++) {
            printf(" ");
        }

        for (int j = 1; j <= hash; j++) {
            if (i % 2 == 1) {
                printf("#");
            } else {
                printf("-");
            }
        }

        printf("\n");
        hash += 2;
        space--;
    }

    // Bottom half (mirrored)
    hash -= 4;
    space = 1;

    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= space; s++) {
            printf(" ");
        }

        for (int j = 1; j <= hash; j++) {
            if (i % 2 == 1) {
                printf("#");
            } else {
                printf("-");
            }
        }

        printf("\n");
        hash -= 2;
        space++;
    }

    return 0;
}
