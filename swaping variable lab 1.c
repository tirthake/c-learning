// swaping variable value
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
printf(" \n final value of A after swaping is:%d\n",a);

printf(" Final value of B after swaping is:%d\n",b);
getch();
}
