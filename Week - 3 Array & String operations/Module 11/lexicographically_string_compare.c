//alphabetically string compariiing
/* sei ketre 6 ta case hote pare.
1.string sesh - A sesh - A smaller
              - B sesh - B smaller
              - A & B sesh - Equal
              
2.Character Ache - A chuto - A smaller
                 - B chuto - B smaller
                 - A == B  - continue checking */


#include<stdio.h>
#include<stdbool.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int i = 0;
    while(true) // 1 o deya jabe if i dont wanna include header file //onekgula condition tai kicu ekta dite hobe. 
             //sei jonno true dilam, upore heading add korlam, na hole infinity time cholbe
    {
        if(a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if(a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }
        else if(b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }
        else if(a[i] < b[i])
        {
            printf("A is smaller");
            break;
        }
        else if(a[i] > b[i])
        {
            printf("B is smaller");
            break;
        }
        else if(a[i] == b[i])
        {
            i++;
        }
    }

    return 0;
}