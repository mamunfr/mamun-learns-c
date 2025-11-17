#include<stdio.h>
#include<limits.h>
int main()
{
    int n; 
    int mx = INT_MIN; //key word for lowest integer value but we must include header file
                       // int mx = 0; for current problem
                       //for maximum int mx = INT_MAX; 
   
    scanf("%d",&n); 
    for(int i = 0; i <= n; i++)
    {
        int val; 
        scanf("%d",&val);
        if(val>mx)      //for maximum if(val < mx)
        {
            mx = val;  
        }

    }
    printf("%d",mx);
    return 0;
}