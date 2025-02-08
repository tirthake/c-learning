#include<stdio.h>
int main()
{
    float weight1,weight2,numOfItem1,numOfItem2,average;

    printf("Enter the  weight of item-1:");
    scanf("%f",&weight1);

    printf("Enter the number of item-1:");
    scanf("%f",&numOfItem1);


    printf("Enter the  weight of item-2:");
    scanf("%f",&weight2);

    printf("Enter the number of item-2:");
    scanf("%f",&numOfItem2);


    average=((weight1*numOfItem1)+(weight2*numOfItem2))/(numOfItem1+numOfItem2);

    printf("\n the average weight of purchases is:%.2lf",average);



    return 0;
}
