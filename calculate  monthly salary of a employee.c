/*Write a C program that accepts an employee's ID,
 total worked hours in a month and the amount he received per hour.
  Print the ID and salary (with two decimal places) of the employee for a particular month.
*/

#include<stdio.h>
int main()
{
char id[10];
int whrs;
float salary,sPh;

printf("enter Employee id:");
scanf("%s",&id);// %c for single character and %s for multiple character
printf("enter working hour:");
scanf("%d",&whrs);
printf("enter salary/hour:");
scanf("%f",&sPh);



salary=whrs*sPh;


printf("\n your id:%s\n",id);
printf("your monthly salary is:%.2f",salary);



/*
%c is like asking for a single brick.
%s is like asking for a whole row of bricks to build a wall. The character array is the space where the wall will be built, and the array's name is the address where the first brick should be placed.

*/

    return 0;
}
