#include<stdio.h>


//1*2+2*3+3*4....n1*n2
int main()
{
int a=1,b=2,n1,n2,sum=0;
printf("enter the n1 of the series:");
scanf("%d",&n1);
printf("enter the n2 of the series:");
scanf("%d",&n2);

printf("1*2+2*3+3*4+.......%d %d",n1,n2);


while (a<=n1&& b<=n2)
{
    sum=sum+a*b;
    a=a+1;
    b=b+1;
}
printf("=%d",sum);



  getch();
}
