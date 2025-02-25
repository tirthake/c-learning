#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter n:");
    scanf("%d",&n);

printf("1^2+2^2+.......+%d^2",n);

    for (i=1;i<=n; i++)
    {
        sum=sum+i*i;
    }
    printf("=%d",sum);
    getch();
}
