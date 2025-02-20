#include<stdio.h>
int main()
{
    int numbers[5],sum=0;

    for(int index=0; index<5; index++) // we can use loop to more eaesy printf by using loop
    {
        printf("numbers[%d]=",index);
        scanf("%d",&numbers[index]);
    }

    for(int index=0; index<5; index++) // we can use loop to more eaesy printf by using loop
    {
       sum=sum+numbers[index];

    }

    printf("the sum is %d\n",sum);
average=(float)sum/5;
printf("average is:%.2f",average);
    return 0;
}










  
