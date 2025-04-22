//write a pogram to add n number of input in array and show addition and average.
#include<stdio.h>
int main()
{
    int a[100];
    int i,n;
    int sum=0;

    printf(" how many numbers:");
    scanf("%d",&n);


    //loop for taking input from user

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    //loop for addition
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }

    //output
    printf(" addition =%d\n",sum);
    printf(" average =%.2f",(float)sum/n);
    getch();

}
