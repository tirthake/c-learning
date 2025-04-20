
// code for all number from 20-30 and for odd numbers and even numbers in this renge
#include<stdio.h>
int main()
{
    int i,num=30;
    printf(" all numbers:");
    for( i=20;i<=num;i++)
     printf("%d ",i);// for all number 20-30

printf("\n all odd numbers:");
    for( i=20;i<=num;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }

printf("\n all even numbers:");
   for( i=20;i<=num;i++)


    {
        if(i%2!=0)
        printf("%d ",i);
    }


getch();
}
