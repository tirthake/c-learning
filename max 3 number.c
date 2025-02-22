#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("enter the value of number1:");
    scanf("%d",&num1);

    printf("enter the value of number2:");
    scanf("%d",&num2);

    printf("enter the value of number3:");
    scanf("%d",&num3);


    max=num1; // dhori num1 is maximum initially
    if(num2>max)
    {
        max=num2; // now assign number 2 as max if  true
    }
    if (num3>max)
    {
        max=num3;// now assign number 3 as max if  true
    }

    printf("the maximum is:%d\n",max);

    return 0;
}
