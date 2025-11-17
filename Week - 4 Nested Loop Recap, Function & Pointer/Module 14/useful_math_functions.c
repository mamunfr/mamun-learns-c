//Function 2 types
//          -Built-in
//          -User-defined

#include<stdio.h>
#include<math.h>
int main()
{
    int ans = ceil(5.4); //ceil function for upper value
    printf("%d ", ans);

    int ans2 = floor(4.5); //floor function for lower value
    printf("%d ", ans2);

    int ans3 = round(6.5);//round function .5 or er upore thakle upper value, niche 
                          //thakle lower value dey
    printf("%d ", ans3);

    double ans5 = sqrt(20);//square root function
    printf("%llf ", ans5);
    
    int ans6 = pow(3,2);//power function, 3 er power 2
    printf("%d ", ans6);

    int ans6 = abs(-50);//absolute function, ignores negative
    printf("%d", ans6);
}