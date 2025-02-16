#include<stdio.h> // if else multiple statement
int main()
{
    /*
    int time =15;
      if (time==10)


       {

       printf("good morning\n");
      printf("tirtha das\n");
       }

      else
        {printf(" sorry its not morning\n");
      printf("tirtha das");}

    */
// if else if condtion statement
//else if
//else has no condition
// find the bigegst number from two input
    int num1,num2;

    printf("enter first number:");
    scanf("%d",&num1);


    printf("enter second number:");
    scanf("%d",&num2);
    if (num1>num2)
        printf("large=%d",num1);
    else if(num1<num2)
        printf("large=%d\n",num2);

    else
        printf("number are equal");
    return 0;
}
