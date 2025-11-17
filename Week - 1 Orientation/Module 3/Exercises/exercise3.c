//Practice today’s all problem with while loop

//Printing I am sorry 
/*#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=5)
    {
        printf("I am sorry\n");
        i++;
    }
}*/

//Printing natural numbers
/*#include<stdio.h>
int main()
{
    int i = 1; //int i = 2; for even numbers //int i = 1; for odd numbers
    while(i <= 10)
    {
        printf("%d\n",i);
        i++; //i+=2; for even and odd
    }
}*/

//sum from 1 to n

/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int i = 1;
    while(i <= n)
    {
        sum = sum + i;
        i++;
        
    }
   

    printf("%d",sum);
}*/

//Find even or odd from 1 to 20
/*#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=20)
    {
        if(i%2 ==0)
        {
            printf("%d - Even\n",i);
        }
        else
        {
            printf("%d - Odd\n",i);
        }
        i++;
    }
}*/

//Use of break in while loop
#include<stdio.h>
int main()
{
    int i = 0;
    while(i<=20)
    {
        i++;
        if(i==12)
        {
            break;  //continue // to skip current itereation
        }
       
        
        printf("%d\n",i);
      
    }
}







