#include<stdio.h>
int main()
{
    int num;
    printf("enter the value of number:");
    scanf("%d",&num) ;


    printf("factors of %d are:",num);
    for (int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            printf("%d\t",i);
        }
    }

    printf("\n");
