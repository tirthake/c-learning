//1+2+3+4+6+......n
#include<stdio.h>
int main()
{
     int n,i,sum=0;
     printf("enter the value of n:");
     scanf("%d",&n);

     printf("1+2+3+4+ ........+%d=",n);

     for(i=1; i<=n;i++)
     {
        sum=sum+i;

     }

 printf(" %d\n",sum);

