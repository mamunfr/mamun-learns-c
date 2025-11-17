//String er scanf er limitation hocche o input e space
//paile input neya off koira dey

#include<stdio.h>
#include<string.h> //if gets/fgets doesnt work
int main()
{
    char s[50];
    //gets(s); //Scanf space paile r input ney na
            //so amra gets() / fgets() use korbo, bracket er moddhe string 
            //variable name diye dibo
    fgets(s, 18, stdin); //gets theke fgets standard and eikhane 3 ta jinish
                          //string name, size, stdin include rakha lagbe
                          //size total size er theke 1 beshi for null char
    printf("%s", s);                      
    return 0;
}

//one limitation of fgets is o enter k o input niye fele

//to conclude string er moddhe space thakle fgets nibo. na hole scanf niyei kaj korbo