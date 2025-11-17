#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)//this loop for main array
    {
        scanf("%d", &a[i]);
    }

    int fre[6] = {0}; //size depends on input e max value kot0 ache
    for (int i = 0; i < n; i++) //this loop for frequency array
    {
        // int val = a[i];
        // fre[val]++;
        fre[a[i]]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d -> %d\n", i, fre[i]);
    }

    return 0;
}