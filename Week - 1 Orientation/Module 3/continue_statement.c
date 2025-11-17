#include<stdio.h> 
int main()
{
    for(int i= 1; i<=10; i++)
    {
        if(i==5)
        {
            continue; //continue thakle simply o loop er baire niche ja ache sob skip kore 
                      //and directly next itereation e chole jay before printing
        }

        printf("%d ",i);
        printf("Hello\n"); //it skipped both no. and hello
    }
}