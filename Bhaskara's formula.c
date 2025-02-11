//Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
#include<stdio.h>
#include<math.h>

int main()
{
   // double
    float a,b,c,discriminent,root1,root2;
    printf("Enter the value of number (a):");
    scanf("%f",&a);
    printf("Enter the value of number (b):");
    scanf("%f",&b);
    printf("Enter the value of number (c):");
    scanf("%f",&c);


    discriminent=(b*b)-(4*a*c);

    if(discriminent<0)
    {
        printf("not possible");
    }

     else if(discriminent==0)
    {
        root1=(-b/(2*a));
        printf("the root is:%f\n",root1);
    }
    if(discriminent>0)
    {

        discriminent = sqrt(discriminent); // Calculate square root of discriminant
        root1 = (-b +discriminent)/(2*a); // Calculate first root
        root2 = (-b - discriminent)/(2*a);

        printf(" root 1:%.5f",root1);
        printf("\n root2:%.5f",root2);
    }
    else
    {
        printf("\n");
    }



    return 0;
}
