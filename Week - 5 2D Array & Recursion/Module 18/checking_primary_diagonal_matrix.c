// Steps to check-
// 1st condition -Square matrix or not
// 2nd -Diagonal er upore ache ki na, 00, 11, 22 (indexes)
//Diagonal hoite hoile square hoite hobe, outside diagonal sob zero hoite hobe

#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //int flag = 100;
    bool is_diagonal = true;

    if (r == c) //Condition for square matrix
    {

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // We are now at Diagonal
                    //printf("%d ", a[i][j]);
                }

                //jodi if(i == j) condition weird lage, we can replace
                //else and add the conditon if(i != j)

                //if(i != j)
                else
                {
                    //we are now at outside of the diagonal
                    if(a[i][j] != 0)
                    {
                        //flag = 200;
                        is_diagonal = false;
                        printf("This is not a primary diagonal matrix");
                    }
                }
            }
        }

        //if(flag == 100)
        if(is_diagonal == true)
        {
            printf("This is a primary diagonal matrix\n");
        }
    }
    else
    {
        printf("This is not a primary diagonal matrix");
    }

    return 0;
}