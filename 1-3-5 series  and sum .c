//1+3+.....+n
#include<stdio.h>
int main()
{
     int n,i,sum=0;
     printf("enter the value of n:");
     scanf("%d",&n);

     printf("1+3+ ........+%d=",n);

     for(i=1; i<=n;i=i+2)  //i=i+2
     {
        sum=sum+i;

     }

 printf(" %d\n",sum);

getch();
}
