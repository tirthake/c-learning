//write a code in array to take n number of input and show its maximum and minimum.


#include<stdio.h>
int main()
{
    int num[100];
    int i,n,max;
    int sum=0;

    printf(" how many numbers:");
    scanf("%d",&n);


    //loop for taking input from user

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }


    //loop for maximum
    max=num[0];// initially declare maximum

    for(i=1; i<n; i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("maximum is = %d\n",max);


    //loop for minimum
    int min =num[0];

    for(i=1; i<n; i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("minimum is = %d",min);


    getch();
}
