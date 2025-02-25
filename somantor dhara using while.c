#include<stdio.h>
int main()
{
//somantor dhara
  // using while loop

  int n,sum=0,a=1;
  printf("Enter the last number:");
  scanf("%d",&n);

  printf("1+2+3+....+%d",n);


  while(a<=n)
  {
      sum=sum+a;
      a=a+1; // we just cahnge this value of a when series are diffferent like 1++3+5+7+9+....
  }
    printf("=%d",sum);
    getch();
}
