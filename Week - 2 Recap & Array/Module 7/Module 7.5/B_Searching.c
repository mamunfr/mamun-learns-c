#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int t;
    scanf("%d", &t);
    int found = 0;

    for(int i = 0; i<n; i++)
    {

        if(t == a[i])
        { 
            found = 1;
            printf("%d", i);
            break;
        }

       
    }

    if(found == 0)
    {
        printf("-1");
    }


    return 0;
}